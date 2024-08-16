#pragma once
#include <vector>
#include "coin.h"
#include "wall.h"
#include "player.h"

class World
{
    std::vector<Wall> walls_;
    std::vector<Coin> coins_;
    Player *player_;

public:
    World();
    World(Player *player) : player_(player)
    {}
    std::vector<Wall> walls() const;
    std::vector<Coin> coins() const;
    void addCoin(Coin coin);
    void addWall(Wall wall);
    Player * player() ;
};
