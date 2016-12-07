/*********************************************************************
** Program Filename: UsrInv.cpp
** Author: Robert Newton
** Date: 12/06/2016
** Description: Final - Implementation file for the UsrInv Class functions
*********************************************************************/

#include <iostream>
#include <string>
#include "UsrInv.hpp"
using namespace std;


/****************************************************************************
**Function: UsrInv constructor
**Description: Sets maxCapacity and capacity
**Parameters:-
******************************************************************************/
UsrInv::UsrInv()
{
	maxCapacity = 5;
	capacity = 0;


}



/****************************************************************************
**Function: addItems
**Description: Adds an key to the UsrInv. limited by maxCapacity
**Parameters: Item *itemName
******************************************************************************/
void UsrInv::addItems(Item *itemName)
{
	if (capacity == 5)
	{
		cout << "Your bandolier is full. Please remove an item of no use" << endl;
		cout << "Make sure you do not need the item!" << endl;
	}
	else
	{
		bandolier.push_back(*itemName);
		cout << "This item has been now added!" << endl;
	}
}



/****************************************************************************
**Function: showItems
**Description: shows the items in UsrInv to the user
**Parameters:-
******************************************************************************/
void UsrInv::showItems()
{
	if (bandolier.capacity() == 0)
	{
		cout << "Your bandolier is empty!" << endl;
	}
	else
	{

		cout << "The current items in the bandolier:" << endl;

		for (int i = 0; i < bandolier.capacity(); i++)
		{
			cout << " --  " << bandolier[i].getitemName() << endl;

		}

		cout << "Would you like to remove an item from your bandolier? Please enter yes or no" << endl;

		string answer;
		cin >> answer;

		if (answer == "yes")
		{
			string takeItem;

			cout << "Type the name of the item in the bandolier in lowercase letters to have it removed " << endl;

			cin.ignore();
			getline(cin, takeItem);
				//set up for safety!!!
				//do not let user remove keys from inventory
			if (takeItem == "bedroom key" || takeItem == "dining key" || takeItem =="garden key")
				cout << "Don't remove keys.. they are vital to your victory! " << endl;
			else
			{

				for (int i = 0; i < bandolier.capacity(); i++)
				{
					if (bandolier[i].getitemName() == takeItem)
						bandolier.erase(bandolier.begin() + i);
				}

				cout << takeItem << " has now been removed" << endl;
			}
		}
		else
		{
			cout << "Zipping your bandolier." << endl;
		}
	}
}



/****************************************************************************
**Function: getSelection
**Description: Returns vector of user items
**Parameters: -
******************************************************************************/
vector<Item> UsrInv::getSelection()
{

	return bandolier;



}
