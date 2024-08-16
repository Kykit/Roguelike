#pragma once
#include "tile.h"


class Coin
{
    Tile tile_;
    int value_ = 1;
public:
    Coin();

    explicit Coin(Tile tile);
    int value() const;
    Tile tile() const;
    void setTile(const Tile &newTile);
};
