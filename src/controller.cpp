#include "controller.h"
#include <iostream>
#include <string> 
// Controller::Controller() {}

void Controller::act(int input)
{
    switch (input) {
    case TK_UP:
        up();
        break;
    case TK_DOWN:
        down();
        break;
    case TK_LEFT:
        left();
        break;
    case TK_RIGHT:
        right();
        break;
    default:
        break;
    }
}

void Controller::left()
{
    world_->player()->setX(world_->player()->x()-1);
    world_->player()->setSteps(world_->player()->steps()+1);
}

void Controller::right()
{
    world_->player()->setX(world_->player()->x()+1);
    world_->player()->setSteps(world_->player()->steps()+1);
}

void Controller::up()
{
    world_->player()->setY(world_->player()->y()-1);
    world_->player()->setSteps(world_->player()->steps()+1);
}

void Controller::down()
{
    world_->player()->setY(world_->player()->y()+1);
    world_->player()->setSteps(world_->player()->steps()+1);
}

Controller::Controller(World *world) : world_(world)
{}
