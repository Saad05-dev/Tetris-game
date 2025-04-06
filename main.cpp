#include "Game.h"

int main()
{
    //init Game engine
    Game game;
    
    //game loop
    while (game.running() && !game.getEndGame())    
    {
        //update
        game.update();
        //render
        game.render();
    }
    return 0;
}