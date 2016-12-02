
/*********************************************************************
** Program Filename: creature.hpp
** Author: Robert Newton
** Date: 11/20/2016
** Description: Assignment 4 - This is the interface for creature class
** which was used in the previous assignment, we will add creRestore to it
*********************************************************************/

#ifndef CREATURE_HPP
#define CREATURE_HPP
#include <iostream>
#include <cstdlib> 
#include <ctime> 
#include <string>


using std::endl;
using std::cout;
using std::cin;
using std::string;
using std::time;


class Creature
//creates creature class
{
  protected:
    int attDice[2]; 

    int defDice[2]; 

    int selfArm;

    int mStr;
    
    int str;
    
    string creatureType;

  public:
    Creature(int attNum, int attSides, int defNum, int defSides, int armPts, int strPts, string creType);
   
    string getType(); 

    void setType(string creType); 

    virtual int attack();

    virtual bool defense(int defRes);

    int creRestore();
};

#endif