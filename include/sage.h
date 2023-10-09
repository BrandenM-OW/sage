#ifndef SAGE_H
#define SAGE_H

//---rename unsigned short and long---
typedef unsigned short u16;
typedef unsigned long u32;

//---Global variables---
#define GBA_SW 160									  // Mode 5 screen width
#define SAGE_WIDTH 120										  // game screen width
#define SAGE_HEIGHT 80										  // game screen height
#define RGB(r, g, b) ((r) + ((g) << 5) + ((b) << 10)) // 15 bit, 0-31, 5bit=r, 5bit=g, 5bit=b

//---Video buffer---
u16 *VRAM;
#define VRAM_F (u16 *)0x6000000	  // front buffer regester
#define VRAM_B (u16 *)0x600A000	  // back buffer regester
#define DISPLAYCONTROL *(u32 *)0x4000000 // display control regester
#define BACKBUFFERBIT 0x10				  // back buffer bit (page flip)

volatile u16 *Scanline = (volatile u16 *)0x4000006; // counter for scanlines

//---Scale mode 5 screen---
#define REG_BG2PA *(volatile unsigned short *)0x4000020 // Horizontal scale register
#define REG_BG2PD *(volatile unsigned short *)0x4000026 // Vertical scale register

//---Buttons---
#define KEY_STATE (*(volatile u16 *)0x4000130)
#define KEY_A !(KEY_STATE & 1)
#define KEY_B !(KEY_STATE & 2)
#define KEY_SL !(KEY_STATE & 4)
#define KEY_ST !(KEY_STATE & 8)
#define KEY_R !(KEY_STATE & 16)
#define KEY_L !(KEY_STATE & 32)
#define KEY_U !(KEY_STATE & 64)
#define KEY_D !(KEY_STATE & 128)
#define KEY_RS !(KEY_STATE & 256)
#define KEY_LS !(KEY_STATE & 512)

//---Timer for FPS---
#define REG_TM2D *(volatile u16 *)0x4000108
#define FPS_15 REG_TM2D >> 12
#define FPS_30 REG_TM2D >> 11

//--Fast Iwram and Ewram
#define IN_IWRAM __attribute__((section(".iwram")))
#define IN_EWRAM __attribute__((section(".ewram")))

//---Sound---
#define REG_SOUNDCNT_X *(volatile u16 *)0x4000084 // Extended sound control
#define REG_SOUNDCNT_L *(volatile u16 *)0x4000080 // DMG sound control
#define REG_SOUNDCNT_H *(volatile u16 *)0x4000082 // Direct sound control
#define REG_SOUND3CNT_L *(volatile u16 *)0x4000070
#define SOUND3BANK32 0x0000 // Use two banks of 32 steps each
#define SOUND3SETBANK1 0x0040
#define REG_WAVE_RAM0 *(volatile u32 *)0x4000090
#define REG_WAVE_RAM1 *(volatile u32 *)0x4000094
#define REG_WAVE_RAM2 *(volatile u32 *)0x4000098
#define REG_WAVE_RAM3 *(volatile u32 *)0x400009C
#define SOUND3SETBANK0 0x0000 // Bank to play 0 or 1 (non set bank is written to)
#define SOUND3PLAY 0x0080	  // Output sound
#define REG_SOUND3CNT_H *(volatile u16 *)0x4000072
#define SOUND3OUTPUT1 0x2000 // Output unmodified
#define REG_SOUND3CNT_X *(volatile u16 *)0x4000074
#define SOUND3INIT 0x8000	  // Makes the sound restart
#define SOUND3PLAYONCE 0x4000 // Play sound once

//--- Helper functions ---
void vsync()
{
	while (*Scanline < 160)
	{
	} // wait all scanlines
}

void flip()
{
	if (DISPLAYCONTROL & BACKBUFFERBIT)
	{
		DISPLAYCONTROL &= ~BACKBUFFERBIT;
		VRAM = (u16 *)VRAM_B;
	} // back  buffer
	else
	{
		DISPLAYCONTROL |= BACKBUFFERBIT;
		VRAM = (u16 *)VRAM_F;
	} // front buffer
}

void initGraphics()
{
	*(u16 *)0x4000000 = 0x405; // mode 5 background 2
	*(u16 *)0x400010A = 0x82;  // enable timer for fps
	*(u16 *)0x400010E = 0x84;  // cnt timer overflow

	// scale small mode 5 screen to full screen-------------------------------------
	REG_BG2PA = 256 / 2; // 256=normal 128=scale
	REG_BG2PD = 256 / 2; // 256=normal 128=scale
}

void clearBackground()
{
	int x, y;
	for (x = 0; x < SAGE_WIDTH; x++)
	{ // rgb values 0-31
		for (y = 0; y < SAGE_HEIGHT; y++)
		{
			VRAM[y * GBA_SW + x] = RGB(8, 12, 16);
		} // clear all 120x80 pixels
	}
}

void playNote(u16 frequency, unsigned char length)
{

	unsigned char adjustedLength = 0xFF - length;

	REG_SOUNDCNT_X = 0x80;
	REG_SOUNDCNT_L = 0xFF77;

	REG_SOUNDCNT_H = 2;

	REG_SOUND3CNT_L = SOUND3BANK32 | SOUND3SETBANK1;
	REG_WAVE_RAM0 = 0x10325476;
	REG_WAVE_RAM1 = 0x98badcfe;
	REG_WAVE_RAM2 = 0x10325476;
	REG_WAVE_RAM3 = 0x98badcfe;
	REG_SOUND3CNT_L = SOUND3BANK32 | SOUND3SETBANK0;

	REG_SOUND3CNT_L |= SOUND3PLAY;

	REG_SOUND3CNT_H = SOUND3OUTPUT1 | adjustedLength;
	REG_SOUND3CNT_X = SOUND3INIT | SOUND3PLAYONCE | frequency;
}

//--- Game Types ---
typedef struct
{
	int x, y;
} Player;

//--- Debugging ---
void printFps(int fpsCount, int *lastFr, int *FPS)
{
	int frames = 0;
	if (FPS_15 == fpsCount)
		frames = 15;
	if (FPS_30 == fpsCount)
		frames = 30;

	if (fpsCount != *lastFr)
	{
		VRAM[frames] = 0;
		VRAM[*FPS] = RGB(31, 31, 0); // draw fps

	}
}
#endif // SAGE_H