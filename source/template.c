#include "../include/sage.h"
#include "../include/input.h"
#include "../include/splash.h"

#include <math.h>

int lastFr = 0, FPS = 0; // for frames per second

Player P;

void init()
{
    P.x = 70;
    P.y = 35; // init player
}

IN_IWRAM void drawImage(int w, int h, int xo, int yo, const u16 *map, int to)
{
    int x, y, c; // image w/h, position offset,  texture name, texture offset
    for (x = 0; x < w; x++)
    {
        for (y = 0; y < h; y++)
        {
            c = map[(y + to * h) * w + x];
            if (c > 0)
            {
                VRAM[(y + yo) * GBA_SW + x + xo] = c;
            }
        }
    }
}

int main()
{
    // Set graphics mode 5, enable BG2, stretch screen to full
    // Mode 5 w/h = 160x128
    // Actual GBA w/h = 240x160
    // Sage engine w/h = 120x80 (work in these dimensions) defined as SAGE_WIDTH and SAGE_HEIGHT
    initGraphics();

    init(); // init game variables

    while (1)
    {
        int FPS_SET = FPS_30; // FPS_15 || FPS_30
        u16 test = splashMap[0];
        if (FPS_SET != lastFr)
        {
            //-- Game Logic Here --
            // drawImage(120, 80, 0, 0, splashMap, 0);
            clearBackground();
            buttons(&P);
            VRAM[P.y * GBA_SW + P.x] = RGB(31, 0, 0);
            //-- end game logic --

            //--- Debugging ---
            // printFps(FPS_SET, &lastFr, &FPS);

            //-- FPS Counter --
            FPS += 1;
            if (lastFr > FPS_SET)
            {
                FPS = 0;
            }
            lastFr = FPS_SET;

            // Wait for VBlank and flip back buffer
            vsync();
            flip();
        }
    }
}