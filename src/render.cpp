#include "render.h"
#include "tile.h"

Render::Render() {}

void Render::drow(const Tile& tile) {
    terminal_put(tile.x(),tile.y(),tile.skin());
}

void Render::update()
{
    terminal_refresh();
}

void Render::renderWorld(World& world)
{
    for (auto coin : world.coins()){
        Render::drow(coin.tile());
    }
    for (auto wall : world.walls()){
        Render::drow(wall.tile());
    }
    int c = terminal_pick(world.player()->x(),world.player()->y());
    std::string s = std::to_string(c);
    terminal_print(1,1, s.c_str());
}


