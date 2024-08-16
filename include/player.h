#pragma once
#include <iostream>
#include <ostream>
#include <string>

#include "tile.h"

class Player
{
    Tile tile_;
    int money_;
    float health_;
    std::string name_;
    int steps_;
public:
    Player();
    Player(Tile tile, float health, std::string name, int money = 0)
        : tile_(tile), health_(health), money_(money) ,name_(std::move(name)) {}
    Player(std::string name) : name_(name){
        Player();
    }
    int x() const;
    void setX(int newX);
    int y() const;
    void setY(int newY);
    int money() const;
    void setMoney(int newMoney);
    float health() const;
    void setHealth(float newHealth);
    char getSkin() const;
    Tile tile() const;
    void setTile(const Tile &newTile);
    int steps() const;
    void setSteps(int newSteps);
};
