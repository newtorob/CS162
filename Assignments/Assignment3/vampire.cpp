/*********************************************************************
 * ** Program Filename: vampire.cpp
 * ** Author: Robert Newton
 * ** Date: 11/07/2016
 * ** Description: This is the implementation file for our vampire class
 * ** The vampire class is part of the assignment 3 dice game and is 1 of 5 
 * ** character classes in this program.
 * ** Input: n/a
 * ** Output: dead
 * *********************************************************************/

#include "vampire.hpp"
#include "creature.hpp"

using std::cout;
using std::cin;
using std::endl;


/*********************************************************************
** Function: vampire
** Description: this builds the constructor for vampire, which sets the 
** internal values nd sets the character type
** Parameters: attack, defense, armor, strength and creature type
** Pre-Conditions: needs vampire.hpp
** Post-Conditions: n/a
** Return: dead
*********************************************************************/
Vampire::Vampire() : Creature(1, 12, 1, 6, 1, 18, "Vampire")
{

};


/*********************************************************************
** Function: defense
** Description: the defense class takes and modifies the defense creature class to account
** for the charm effect that the vampire carries
** Parameters: attResult
** Pre-Conditions: vampire.hpp creature.hpp
** Post-Conditions: n/a
** Return: dead
*********************************************************************/
bool Vampire::defense(int attResult) 
{
	bool dead = true;
	int goat = rand() % 100 + 1;


	if (goat > 50) 
	{
		dead = Creature::defense(attResult);
	}

	else
	{
		cout << str << " strength points left." << endl;
		cout << "The vampire charmed you! You cannot attack!" << endl;
	}

	return dead;
};
