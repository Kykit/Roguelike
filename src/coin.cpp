#include "coin.h"

int Coin::value() const
{
    return value_;
}

Tile Coin::tile() const
{
    return tile_;
}

void Coin::setTile(const Tile &newTile)
{
    tile_ = newTile;
}

Coin::Coin() {}
Coin::Coin(Tile tile) : tile_(tile) { tile.setSkin('$'); }
