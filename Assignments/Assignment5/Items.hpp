/*********************************************************************
** Program Filename: Items.hpp
** Author: Robert Newton
** Date: 12/06/2016
** Description: Final - Interface file for the Item Class functions
*********************************************************************/

#ifndef ITEMS_HPP
#define ITEMS_HPP

#include <string>
#include <iostream>
using namespace std;



class Item
{


private:
	string itemName;


public:
	Item();

	Item(string);

	string getitemName();


};

#endif
