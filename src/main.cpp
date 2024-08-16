#include <BearLibTerminal.h>
#include <iostream>
#include "player.h"
#include "render.h"
#include "controller.h"
#include "world.h"
#include "coin.h"

//*********************************************************

bool gameEnd = false;
class UserInput{
public:
    int readKey();

};
int UserInput::readKey()
{
    int in = 0;
    if (terminal_has_input()){
        in = terminal_read();
        if (in == TK_CLOSE){
            terminal_close();
            gameEnd = true;
        }
        return in;
    }
    return in;
}


int main() {
    Player pl({10,10,'@'},10,"ar");

    terminal_open();
    terminal_refresh();
    UserInput input;
    World world(&pl);
    world.addCoin(Coin({10,20,'$'}));
    Controller control(&world);
    while (!gameEnd){
        terminal_clear();
        control.act(input.readKey());
        Render::drow(world.player()->tile());
        Render::renderWorld(world);
        Render::update();
    }
    // Ждем, пока пользователь не закроет окно

}


