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
#include <cstdlib>
#include <iostream>
#include <ctime>



LoadedDie::LoadedDie(){
    //default constructor is 6 sides
    setSides(6);
}

LoadedDie::LoadedDie(int dieSides) {
    //sets the custom number of sides
    setSides(dieSides);
}


int LoadedDie::loadedRoll()
{
    
    int n =rand()% numSides +2;
    if (n > numSides) {
        n = numSides;
    }
    //roll can't exceed the number of sides
    return n;
}