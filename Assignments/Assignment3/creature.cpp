/*********************************************************************
 * ** Program Filename: creature.cpp
 * ** Author: Robert Newton
 * ** Date: 11/07/2016
 * ** Description: This is the implementation file for our creature class.
 * ** The creature class is paramount to set the creature type from our 5 
 * ** different creatures.
 * ** 
 * ** Input: n/a
 * ** Output: n/a
 * *********************************************************************/

#include "creature.hpp"
#include <iostream>
#include <ctime>

using std::time;
using std::cout;
using std::cin;
using std::endl;

/*********************************************************************
** Function: creature
** Description: this is the constructor for creature, it is an abstract
**BASE class which sets the different parameters for what each creature will do.
** Parameters: attack, defense, armor, strength and creature type
** Pre-Conditions: creature.hpp needs to be included
** Post-Conditions: n/a
** Return: none
*********************************************************************/

Creature::Creature(int attNum, int attSides, int defNum, int defSides, int armPts, int strPts, string creType) {

	  srand (time(NULL));
	  
	  attDice[0] = attNum;
	  attDice[1] = attSides;
	  defDice[0] = defNum;
	  defDice[1] = defSides;
	  armor = armPts;
	  str = strPts;
	  cre = creType;
	  
	  
};


 /*********************************************************************
** Function: attack
** Description: The attack function rolls the dice for the attack then
** returns results
** Parameters: n/a
** Pre-Conditions: n/a
** Post-Conditions: n/a
** Return: dead
*********************************************************************/

int Creature::attack() {

	  int dead = 0;

	  for (int i = 0; i < attDice[0]; i++) {
		      dead += rand() % attDice[1] + 1;
		        
	  }

	    return dead;


};


 /*********************************************************************
** Function: defense
** Description: The defense unction takes the result of attack, subtracts the armor
** and rolls a defense number that is taken from the attack number. It returns
** a bool of whether or not the creature died.
** Parameters: attResult
** Pre-Conditions: n/a
** Post-Conditions: n/a
** Return: dead
*********************************************************************/

bool Creature::defense(int attResult){

	  bool dead = true;
	    attResult -= armor;
	    for (int i = 0; i < defDice[0]; i++) {
		        attResult -= rand() % defDice[1] + 1;
			  
	    }
	    if (attResult < 1){
		        attResult = 0; 
			  
	    }
	      str -= attResult;
	      if (str < 1) {
		          str = 0;
			      dead = false; 
			        
	      }
	        cout << str << " strength points left." << endl;
		if (attResult > 80) {
			    cout << "Medusa used glare! You've turned to stone!'" << endl;
			      
		}
		  return dead;


};

 /*********************************************************************
** Function: type
** Description: A simple string type for setting the creature
** Parameters: n/a
** Pre-Conditions: n/a
** Post-Conditions: n/a
** Return: cre
*********************************************************************/

string Creature::type() {

	  return cre;


};