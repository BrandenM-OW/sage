
//{{BLOCK(splash)

//======================================================================
//
//	splash, 120x80@4, 
//	+ palette 256 entries, not compressed
//	+ 59 tiles (t|f|p reduced) not compressed
//	+ regular map (flat), not compressed, 15x10 
//	Total size: 512 + 1888 + 300 = 2700
//
//	Time-stamp: 2023-10-09, 19:00:07
//	Exported by Cearn's GBA Image Transmogrifier, v0.9.2
//	( http://www.coranac.com/projects/#grit )
//
//======================================================================

#ifndef GRIT_SPLASH_H
#define GRIT_SPLASH_H

#define splashTilesLen 1888
extern const unsigned int splashTiles[472];

#define splashMapLen 300
extern const unsigned short splashMap[150];

#define splashPalLen 512
extern const unsigned short splashPal[256];

#endif // GRIT_SPLASH_H

//}}BLOCK(splash)
