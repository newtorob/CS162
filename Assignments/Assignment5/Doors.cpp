/*********************************************************************
** Program Filename: Doors.cpp
** Author: Robert Newton
** Date: 12/06/2016
** Description: Final - Implementation file for the Doors Class functions
*********************************************************************/

#include "Doors.hpp"
#include <iostream>
using namespace std;


/****************************************************************************
**Function: Door constructor
**Description: Sets nameof_Room, room_id, door1, and keyInv
**Parameters: string n1, int room
******************************************************************************/
Door::Door(string n1, int room)
{

	nameof_Room = n1;
	room_id = room;
	door1 = false;
	keyInv = false;
}


/****************************************************************************
**Function: Door default constructor
**Description:-
**Parameters:-
******************************************************************************/
Door::Door()
{


}


/****************************************************************************
**Function:checkRoom
**Description: Gives user option to get description of room or look around
**Parameters:-
**Pre-Conditions: Door must exist
**Post-Conditions: final room can be accessed if all three keys are on user
******************************************************************************/
void Door::roomCheck()
{
	//give the option to check for three keys
	// if three keys in inventory->Door opens
	int option = 0;
	cout << "<**************>" << endl;

	cout << "1. To get an account of the room" << endl;

	cout << "2. To look around the room" << endl;

	cout << "<**************>" << endl;
	cin >> option;

	if (option == 1)
		account();
	if (option == 2)
	{

		cout << "Odd, there seems to be 3 key holes in the door." << endl;


		string doorChoice;

		cout << "Would you like to open the door?" << endl;

		cin >> doorChoice;

		if (doorChoice == "yes")
		{
			//check the keys
			if (keyInv == true)
			{
				door1 = true;

				cout << "The door is unlocked" << endl;
			}
			else
				cout << "You should get the keys for this door." << endl;
		}


	}

}


/****************************************************************************
**Function: account
**Description: Gives account of the current room
**Parameters: -
******************************************************************************/
void Door::account()
{
	cout << "This room has a rather large door in it. " << endl;

	cout << "Your gut is telling you, that is the way to go" << endl;

	cout << "There are 3 keyholes in the door." << endl;



}


/****************************************************************************
**Function: getKeyInv
**Description: sets keyCheck to to true
**Parameters: -
**Pre-Conditions: Keys must be on user
**Post-Conditions: Door can be opened
******************************************************************************/
void Door::getKeyInv()
{
	keyInv = true;

}
