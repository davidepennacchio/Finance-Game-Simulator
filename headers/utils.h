#ifndef UTILS_H
#define UTILS_H

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include "engine/market.h"
#include "engine/player.h"

typedef struct s_engine
{
    int running;
    unsigned long tick;
    t_market market;
    t_player player;
} t_engine;

#endif