#pragma once
#include <BearLibTerminal.h>
#include "world.h"

// #include <map>
class Controller
{
    World *world_;
    // std::map <int , Command>commands_;
public:
    // Controller();
    Controller(World *world_);
    void act(int input);
    void left();
    void right();
    void up();
    void down();
};
