/*********************************************************************
** Program Filename: Rooms.hpp
** Author: Robert Newton
** Date: 12/06/2016
** Description: Final - Interface file for the Rooms Class functions
*********************************************************************/

#ifndef ROOMS_HPP
#define ROOMS_HPP

#include "Space.hpp"




class Rooms : public Space

{

public:
	void roomCheck();

	void account();

	Rooms(string, int);

	Rooms();

	void roomEnigma();



};

#endif
