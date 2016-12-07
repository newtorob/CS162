/*********************************************************************
** Program Filename: UsrInv.hpp
** Author: Robert Newton
** Date: 12/06/2016
** Description: Final - Interface file for the UsrInv Class functions
*********************************************************************/

#ifndef USRINV_HPP
#define USRINV_HPP

#include <iostream>
#include <vector>
#include "Items.hpp"



class UsrInv
{


private:

	int capacity;

	int maxCapacity;

	vector<Item> bandolier;




public:
	UsrInv();

	void addItems(Item *itemName);

	void removeItems();

	void showItems();

	vector<Item> getSelection();



};

#endif
