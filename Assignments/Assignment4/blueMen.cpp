/*********************************************************************
 * ** Program Filename: blueMen.cpp
 * ** Author: Robert Newton
 * ** Date: 11/07/2016
 * ** Description: This is the implementation file for our blueMen class
 * ** The blueMen class is part of the assignment 3 dice game and is 1 of 5 
 * ** character classes in this program.
 * ** Input: n/a
 * ** Output: returns result
 * *********************************************************************/

#include "blueMen.hpp"
#include <iostream>

using namespace std;

/*********************************************************************
** Function: BlueMen
** Description: this builds the constructor for BlueMen, which sets the 
** internal values and reuses the defense function for the mob feature.
** Parameters: attack, defense, armor, strength and creature type
** Pre-Conditions: blueMen.hpp needs to inherit creature
** Post-Conditions: n/a
** Return: dead
*********************************************************************/

BlueMen::BlueMen() : Creature(2, 10, 3, 6, 3, 12, "Blue Men") {};

bool BlueMen::defense(int attResult) {

	  bool dead = Creature::defense(attResult);

	    
	    if ((str == 8 && defDice[0] == 3) || (str == 4 && defDice[0] == 2)) {
	    	  defDice[0]--;
	        }

  return dead;
};

