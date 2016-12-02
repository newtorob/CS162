/*********************************************************************
 * ** Program Filename: vampire.hpp
 * ** Author: Robert Newton
 * ** Date: 11/07/2016
 * ** Description: This is the header file for our vampire class.
 * ** The vampire class is part of the assignment 3 dice game and is 1 of 5 
 * ** character classes in this program.
 * ** Input: n/a
 * ** Output: n/a
 * *********************************************************************/


#ifndef VAMPIRE_HPP
#define VAMPIRE_HPP

#include "creature.hpp"

//creates the vampire class
class Vampire : public Creature
{
	public:
	
		Vampire();

		bool defense (int);

};

#endif
