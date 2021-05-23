#ifndef VIDEO_H
#define VIDEO_H

#include <stdint.h>

int vmode;

int curx;
int cury;
int charw;
int charh;
int screenw;
int screenh;
int textw;
int texth;
int tab;

uint32_t fgc, bgc;

void (* ksetchar)(int x, int y, char c);
char (* kgetchar)(int x, int y);
void (* vclearcolor)(uint32_t color);
void (* vblankcolor)(uint32_t color);
void (* vclearlinecolor)(int l, uint32_t color);
void (* vblanklinecolor)(int l, uint32_t color);
void (* updatecursor)(void);
void (* vscroll)(int l);

#include "text-mode/text-mode.h"
#include "gfx-mode/gfx-mode.h"
#include "video.c"

#endif