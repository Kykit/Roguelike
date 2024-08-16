#include "player.h"

Tile Player::tile() const
{
    return tile_;
}

void Player::setTile(const Tile &newTile)
{
    tile_ = newTile;
}

int Player::steps() const
{
    return steps_;
}

void Player::setSteps(int newSteps)
{
    steps_ = newSteps;
}

Player::Player()
{
    tile_.setX(10);
    tile_.setY(10);
    tile_.setSkin('@');
    setHealth(10);
    setMoney(0);
}

int Player::x() const
{
    return tile_.x();
}

int Player::y() const
{
    return tile_.y();
}

void Player::setX(int newX)
{
    tile_.setX(newX);
}

void Player::setY(int newY)
{
    tile_.setY(newY);
}

int Player::money() const
{
    return money_;
}

void Player::setMoney(int newMoney)
{
    money_ = newMoney;
}

float Player::health() const
{
    return health_;
}

void Player::setHealth(float newHealth)
{
    health_ = newHealth;
}

