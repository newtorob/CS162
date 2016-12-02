/*********************************************************************
 **Robert Newton
 **10/16/2016
 **Dice War
 **This program is designed to pit two players against eachother in
 a heated duel in a game called war. The player with the higher score
 obviously is the winner, however instead of collecting card like in 
 traditional war each player is scored.
 *********************************************************************/

#include "loadedDice.h"
#include "game.h"


int main() {
    
    srand(static_cast<int> (time(NULL)));
    
    Game game;
    game.setup();
    game.play();
    
    return 0;
}