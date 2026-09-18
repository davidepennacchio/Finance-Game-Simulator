#include "engine.h"



int main()
{
    t_engine engine;

    if (engine_init(&engine) != 0)
        return 1;
    engine_run(&engine);
    engine_shutdown(&engine);
    return 0;
}