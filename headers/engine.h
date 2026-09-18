#ifndef ENGINE_H
#define ENGINE_H

#include "engine/market.h"
#include "engine/player.h"
#include "engine/tick.h"
#include "ui.h"
#include "database.h"

typedef struct s_engine
{
    int running;
    unsigned long tick;
    t_market market;
    t_player player;
} t_engine;

int engine_init(t_engine *engine);
void engine_run(t_engine *engine);
void engine_shutdown(t_engine *engine);

#endif