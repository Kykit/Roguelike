#pragma once
#include "BearLibTerminal.h"
#include "tile.h"
#include "world.h"
#include "world.h"
class Render
{
    World map;
public:
    Render();
    static void drow(const Tile &tile);
    static void update();
    static void renderWorld(World &world);

};
