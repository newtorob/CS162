/*********************************************************************
 **Robert Newton
 **10/16/2016
 **Dice War
 **This program is designed to pit two players against eachother in
 a heated duel in a game called war. The player with the higher score
 obviously is the winner, however instead of collecting card like in 
 traditional war each player is scored.
 *********************************************************************/

#ifndef LOADEDDICE_H
#define LOADEDDICE_H
#include "dice.h"
#include <cstdlib>

//loadeddie is a child of die class
//therefore inherits the properties
class LoadedDie : public Die {
public:
    LoadedDie();

    LoadedDie(int);

    int loadedRoll();

};


#endif 