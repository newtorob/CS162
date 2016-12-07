/*********************************************************************
** Program Filename: Doors.hpp
** Author: Robert Newton
** Date: 12/06/2016
** Description: Final - Interface file for the Doors Class functions
*********************************************************************/
#ifndef DOORS_HPP
#define DOORS_HPP

#include "Space.hpp"


class Door : public Space
{

private:
	bool keyInv;




public:
	void roomCheck();
	void account();
	Door(string, int);
	Door();
	void getKeyInv();


};

#endif
