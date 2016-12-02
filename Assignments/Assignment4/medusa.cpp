/*********************************************************************
 * ** Program Filename: medusa.cpp
 * ** Author: Robert Newton
 * ** Date: 11/07/2016
 * ** Description: This is the implementation file for our blueMen class
 * ** The blueMen class is part of the assignment 3 dice game and is 1 of 5 
 * ** character classes in this program.
 * ** Input: n/a
 * ** Output: returns result
 * *********************************************************************/


#include "medusa.hpp"
#include <iostream>

using namespace std;


/*********************************************************************
** Function: medusa
** Description: this builds the constructor for medusa, which sets the 
** internal values nd sets the character type
** Parameters: attack, defense, armor, strength and creature type
** Pre-Conditions: needs medusa.hpp
** Post-Conditions: n/a
** Return: dead
*********************************************************************/
Medusa::Medusa() : Creature(2, 6, 1, 6, 3, 8, "Medusa") 
{

}

/*********************************************************************
** Function: medusa
** Description: The attack function modifies the attack function and implements
** the glare ability that medusa has, if she rolls 12, she wins
** internal values nd sets the character type
** Parameters: attack, defense, armor, strength and creature type
** Pre-Conditions: needs medusa.hpp
** Post-Conditions: n/a
** Return: dead
*********************************************************************/
int Medusa::attack() 
{
	int dead = Creature::attack();

	if (dead == 12)
	{
		dead = 120;
	}

	return dead;
}
