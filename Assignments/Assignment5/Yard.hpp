/*********************************************************************
** Program Filename: Yard.hpp
** Author: Robert Newton
** Date: 12/06/2016
** Description: Final - Interface file for the Yard Class functions
*********************************************************************/

#ifndef YARD_HPP
#define YARD_HPP

#include "Space.hpp"

class Yard : public Space
{

public:

	void roomCheck();

	void account();

	Yard(string, int);

	Yard();

	void enigma();


};

#endif
