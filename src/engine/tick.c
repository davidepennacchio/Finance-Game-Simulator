#include "engine/tick.h"
#include "engine.h"

void tick_run(t_engine *engine)
{
    engine->tick++;
}