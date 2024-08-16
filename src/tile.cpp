#include "tile.h"

int Tile::skin() const
{
    return skin_;
}

void Tile::setSkin(int newSkin)
{
    skin_ = newSkin;
}

void Tile::resetSkin()
{
    setSkin(' ');
}

int Tile::x() const
{
    return x_;
}

void Tile::setX(int newX)
{
    x_ = newX;
}

int Tile::y() const
{
    return y_;
}

void Tile::setY(int newY)
{
    y_ = newY;
}

Tile::Tile() {}

Tile::Tile(int x,  int y, int skin ) : x_(x), y_(y), skin_(skin)
{}
