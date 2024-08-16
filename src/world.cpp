#include "world.h"
#include "player.h"
#include "wall.h"

std::vector<Wall> World::walls() const
{
    return walls_;
}

std::vector<Coin> World::coins() const
{
    return coins_;
}

void World::addCoin(Coin coin)
{
    coins_.push_back(coin);
}

void World::addWall(Wall wall)
{
    walls_.push_back(wall);
}

Player * World::player() 
{
    return player_;
}


World::World() {}


