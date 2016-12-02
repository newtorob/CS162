/*********************************************************************
 * ** Program Filename: medusa.hpp
 * ** Author: Robert Newton
 * ** Date: 11/07/2016
 * ** Description: This is the header file for our medusa class.
 * ** The medusa class is part of the assignment 3 dice game and is 1 of 5 
 * ** character classes in this program.
 * ** Input: n/a
 * ** Output: n/a
 * *********************************************************************/


#ifndef MEDUSA_HPP
#define MEDUSA_HPP

#include "creature.hpp"

class Medusa : public Creature
{
	public:
		Medusa();
		
		int attack();
};

#endif
