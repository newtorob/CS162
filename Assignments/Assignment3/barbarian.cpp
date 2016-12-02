/*********************************************************************
 * ** Program Filename: barbarian.cpp
 * ** Author: Robert Newton
 * ** Date: 11/07/2016
 * ** Description: This is the implementation file for our barbarian class.
 * ** The barbarian class is part of the assignment 3 dice game and is 1 of 5 
 * ** character classes in this program.
 * ** Input: n/a
 * ** Output: n/a
 * *********************************************************************/

#include "barbarian.hpp"


/*********************************************************************
** Function: Barbarian
** Description: This is the constructor class for barbarian
** Parameters: attack, defense, armor, strength and creature type
** Pre-Conditions: barbarian.hpp needs to inherit creature
** Post-Conditions: n/a
** Return: none
*********************************************************************/
Barbarian::Barbarian() : Creature(2, 6, 2, 6, 0, 12, "Barbarian") 
{

};
