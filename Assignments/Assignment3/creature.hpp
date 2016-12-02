/*********************************************************************
 * ** Program Filename: creature.hpp
 * ** Author: Robert Newton
 * ** Date: 11/07/2016
 * ** Description: This is the header file for our creature class.
 * ** The creature class is part of the assignment 3 dice game and is the 
 * ** main creator of different character for our game, Each character needs
 * ** to pull from this class.
 * ** Input: n/a
 * ** Output: n/a
 * *******************************************************************/


#include <iostream>
#include <string>
#include <cstdlib> 
#include <ctime> 

#ifndef CREATURE_HPP
#define CREATURE_HPP

using std::cout;
using std::cin;
using std::endl;
using std::string;


class Creature
{
   protected:
       int attDice[2]; 
       int defDice[2]; 
       int armor;
       int str;
       string cre;

    public:
        Creature(int , int , int , int , int , int , string);
        string type();
        virtual int attack();
        virtual bool defense(int);
};
#endif

