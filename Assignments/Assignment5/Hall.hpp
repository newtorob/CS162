/*********************************************************************
** Program Filename: Hall.hpp
** Author: Robert Newton
** Date: 12/06/2016
** Description: Final - Interface file for the Hall Class functions
*********************************************************************/
#ifndef HALL_HPP
#define HALL_HPP

#include "Space.hpp"




class Hall : public Space
{

public:
	void roomCheck();

	void account();

	Hall(string,int);

	Hall();

};

#endif
