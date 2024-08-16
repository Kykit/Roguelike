#pragma once

class Tile
{
    int x_ , y_;
    int skin_ = ' ';
public:
    Tile();
    Tile(int y, int x ,int skin);
    int skin() const;
    void setSkin(int newSkin);
    void resetSkin();
    int x() const;
    void setX(int newX);
    int y() const;
    void setY(int newY);
};
