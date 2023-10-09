#ifndef INPUT_H
#define INPUT_H

#include "sage.h"

void buttons(Player *P) // buttons to press
{
    if (KEY_R)
    {
        P->x += 3;
        if (P->x > SAGE_WIDTH - 1)
        {
            P->x = SAGE_WIDTH - 1;
        }
    } // move right
    if (KEY_L)
    {
        P->x -= 3;
        if (P->x < 0)
        {
            P->x = 0;
        }
    } // move left
    if (KEY_U)
    {
        P->y -= 3;
        if (P->y < 0)
        {
            P->y = 0;
        }
    } // move up
    if (KEY_D)
    {
        P->y += 3;
        if (P->y > SAGE_HEIGHT - 1)
        {
            P->y = SAGE_HEIGHT - 1;
        }
    } // move down
    if (KEY_A)
    {
    }
    if (KEY_B)
    {
    }
    if (KEY_LS)
    {
    }
    if (KEY_RS)
    {
    }
    if (KEY_ST)
    {
    }
    if (KEY_SL)
    {
    }
}

#endif