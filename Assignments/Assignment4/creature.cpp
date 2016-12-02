
/*********************************************************************
** Program Filename: creature.cpp
** Author: Robert Newton
** Date: 11/20/2016
** Description: Assignment 4 - This is the plementation for creature class
** which was used in the previous assignment, we will add creRestore to it
*********************************************************************/

#include "creature.hpp"
#include <iostream>
using std::endl;
using std::cout;
using std::cin;
using std::string;
using std::time;


/*********************************************************************
** Function: creature
** Parameters: int, int, int, int, int, int, string
**Description: This is the constructor for creature
*********************************************************************/

Creature::Creature(int attNum, int attSides, int defNum, int defSides, int armPts, int strPts, string creType) {

  

  attDice[0] = attNum;
  attDice[1] = attSides;
  defDice[0] = defNum;
  defDice[1] = defSides;
  selfArm = armPts;
  mStr = strPts;
  str = mStr;
  creatureType = creType;

};



/*********************************************************************
** Function: attack
** Parameters: n/a
**Description: This implements the attack function, rolls the dice for
** the attack
**Return: res
***********************************************************************/


int Creature::attack() {

  int res = 0;

  for (int i = 0; i < attDice[0]; i++) {
    res += rand() % attDice[1] + 1;
  }

  return res;

};

/*********************************************************************
** Function: defense
** Parameters: n/a
**Description: This implements the defense function, takes the result of 
 the attack function, minuses armor and rolls the dice for a defense number
 ** returns the result of if the creature was killed.
**Return: res
***********************************************************************/


bool Creature::defense(int defRes){

  bool res = true;

  defRes -= selfArm;

  for (int i = 0; i < defDice[0]; i++) {

    defRes -= rand() % defDice[1] + 1;

  }
  if (defRes < 1){

    defRes = 0; 

  }
  str -= defRes;
  if (str < 1) {

    str = 0;
    //if dead, return false
    res = false; 

  }

  return res;

};


/*********************************************************************
** Function: getType
** Parameters: n/a
**Description: gets the creature type 
**Return: the creature type
***********************************************************************/


string Creature::getType() {

  return creatureType;

};
/*********************************************************************
** Function: setType
** Parameters: creType
**Description: sets the creature type
**Return: n/a
***********************************************************************/

void Creature::setType(string creType) {

  creatureType = creType;

};

/*********************************************************************
** Function: creRestore
** Parameters: n/a
**Description: restores the strength points for a random amount in the
**rand of present strength points and max point
**Return: restorePts
***********************************************************************/

int Creature::creRestore() {

  int restorePts = 0;

  if (str < mStr) {

    restorePts = rand() % (mStr - str) + 1;
    str += restorePts;

  }

  return restorePts;

};