#pragma once
#include "tile.h"

class Wall
{
    Tile tile_;
public:
    Wall();
    explicit Wall(Tile tile) : tile_(tile) { tile.setSkin('#');}
    Tile tile() const;
    void setTile(const Tile &newTile);
};
