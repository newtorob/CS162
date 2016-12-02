/*********************************************************************
 **Robert Newton
 **10/16/2016
 **Dice War
 **This program is designed to pit two players against eachother in
 a heated duel in a game called war. The player with the higher score
 obviously is the winner, however instead of collecting card like in 
 traditional war each player is scored.
 *********************************************************************/

#ifndef GAME_H
#define GAME_H
#include <iostream>
#include <ctime>
#include <cstdlib>
#include "dice.h"
#include "loadedDice.h"

class Game : public LoadedDie {

    private:
        int numRounds, maxRound, p1Score, p2Score, s1, s2;
        char choice1, choice2;
        LoadedDie p1;
        LoadedDie p2;
        
    public:
        Game();
        void setup();
        void printGame();
        void play();
};
#endif 