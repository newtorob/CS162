/*********************************************************************
 * ** Program Filename: blueMen.cpp
 * ** Author: Robert Newton
 * ** Date: 11/07/2016
 * ** Description: This is the implementation file for our blue men class.
 * ** The blue men class is part of the assignment 3 dice game and is 1 of 5 
 * ** character classes in this program.
 * ** Input: n/a
 * ** Output: n/a
 * *********************************************************************/

#ifndef BLUEMEN_HPP
#define BLUEMEN_HPP

#include "creature.hpp"


class BlueMen : public Creature
{
	public:
		 BlueMen();

		 bool defense(int);
};

#endif
