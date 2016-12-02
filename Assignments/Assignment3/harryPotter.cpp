/*********************************************************************
 * ** Program Filename: harryPotter.cpp
 * ** Author: Robert Newton
 * ** Date: 11/07/2016
 * ** Description: This is the harryPotter implementation file for assignment 3.
 * ** this sets up the class if the user chooses the boy who lived.
 * ** so we can use that information for the game
 * ** Input: user choice
 * ** Output: starts the game
 * *********************************************************************/

#include "harryPotter.hpp"
#include <iostream>
using std::cout;
using std::cin;
using std::endl;


 /*********************************************************************
** Function: HarryPotter
** Description: the constructor class set for implementing the values 
** Parameters: attack, defense, armor, strength and creature type
** Pre-Conditions: must pull in harrPotter.hpp
** Post-Conditions: n/a
** Return: dead
*********************************************************************/


HarryPotter::HarryPotter() : Creature(2, 6, 2, 6, 0, 10, "Harry Potter") {
	  dead = false;

};


/*********************************************************************
** Function: defense
** Description: bool for determining if the boy who lived has in fact died
** we implement the defense function to reset the str when harry dies.
** Parameters: attack, defense, armor, strength and creature type
** Pre-Conditions: must pull in harrPotter.hpp
** Post-Conditions: n/a
** Return: res
*********************************************************************/
bool HarryPotter::defense(int attResult) {

	  bool res = Creature::defense(attResult);

	  if (!res && !dead) {
		      cout << "Harry used the power of Hogwarts and came back to life!" << endl;
		      dead = true;
		      str = 20;
		      res = true;
				    
	  }

	    return res;


};
