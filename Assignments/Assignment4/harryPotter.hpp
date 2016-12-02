/*********************************************************************
 * ** Program Filename: harryPotter.hpp
 * ** Author: Robert Newton
 * ** Date: 11/07/2016
 * ** Description: This is the header file for our harry potter class.
 * ** The harry potter class is part of the assignment 3 dice game and is 1 of 5 
 * ** character classes in this program.
 * ** Input: n/a
 * ** Output: n/a
 * *********************************************************************/

#ifndef HARRYPOTTER_HPP
#define HARRYPOTTER_HPP

#include "creature.hpp"


class HarryPotter : public Creature

{
	private:
    	bool dead; 
	public:
	HarryPotter();

	bool defense(int);
	
};

#endif
