/*********************************************************************
** Program Filename: Items.cpp
** Author: Robert Newton
** Date: 12/06/2016
** Description: Final - Implementation file for the Items Class functions
*********************************************************************/

#include "Items.hpp"
#include <iostream>

/****************************************************************************
**Function: Item constructor
**Description: sets itemName
**Parameters:string n1
******************************************************************************/
Item::Item(string n1)
{

	itemName = n1;

}



/****************************************************************************
**Function:Item default
**Description: -
**Parameters:-
******************************************************************************/
Item::Item()
{

}



/****************************************************************************
**Function:getSelection
**Description: Returns itemName
**Parameters:-
******************************************************************************/
string Item::getitemName()
{

	return itemName;


}
