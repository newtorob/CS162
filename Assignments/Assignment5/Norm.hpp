/*********************************************************************
** Program Filename: Norm.hpp
** Author: Robert Newton
** Date: 12/06/2016
** Description: Final - Interface file for the Norm Class functions
*********************************************************************/
#ifndef NORM_HPP
#define NORM_HPP

#include "Space.hpp"
#include <iostream>
#include <string>

using namespace std;



class Norm : public Space
{

public:

	void roomCheck();
	void account();


	Norm(string, int);

	Norm();

	void labCheck();

};

#endif
