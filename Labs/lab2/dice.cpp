/*********************************************************************
 **Robert Newton
 **10/16/2016
 **Dice War
 **This program is designed to pit two players against eachother in
 a heated duel in a game called war. The player with the higher score
 obviously is the winner, however instead of collecting card like in 
 traditional war each player is scored.
 *********************************************************************/

#include "dice.h"

#include <iostream>
#include <cstdlib>
#include <ctime>


Die::Die() {
	//sets default sides to 6
    setSides(6);

}

Die::Die(int dieSides){
	//sets a custom number of sides
    setSides(dieSides);
}

void Die::setSides(int dieSides){
	//sides cannot be less than 0
    if (numSides > 0){
        numSides = dieSides;
    }
    else{
        numSides = 6;
    }
}

int Die::roll() {
	//return a random integer between 1 and N as
	//the result of rolling the die
	int n = rand()% numSides +1;

	return n;
}