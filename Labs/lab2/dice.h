/*********************************************************************
 **Robert Newton
 **10/16/2016
 **Dice War
 **This program is designed to pit two players against eachother in
 a heated duel in a game called war. The player with the higher score
 obviously is the winner, however instead of collecting card like in 
 traditional war each player is scored.
 *********************************************************************/

#ifndef DICE_H
#define DICE_H

#include <ctime>
#include <cstdlib>

class Die
{
//the number of sides on the die
protected:
    int numSides;
    
public:
	//default constructor
    Die();
    //constructor that takes an int value
    Die(int);
    //set the sides of the die
    void setSides(int);
    //constructor for our roll
    int roll();
};


#endif 