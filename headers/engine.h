#ifndef ENGINE_H
#define ENGINE_H

#include "utils.h"
#include "ui.h"
#include "database.h"
#include "engine/tick.h"

int engine_init(t_engine *engine);
void engine_run(t_engine *engine);
void engine_shutdown(t_engine *engine);

#endif