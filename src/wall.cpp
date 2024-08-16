#include "wall.h"

Tile Wall::tile() const
{
    return tile_;
}

void Wall::setTile(const Tile &newTile)
{
    tile_ = newTile;
}

Wall::Wall() {}
