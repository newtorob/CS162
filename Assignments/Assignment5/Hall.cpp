/*********************************************************************
** Program Filename: Hall.cpp
** Author: Robert Newton
** Date: 12/06/2016
** Description: Final - Implementation file for the Hall Class functions
*********************************************************************/

#include "Hall.hpp"
#include <iostream>
#include <time.h>
#include <stdlib.h>
using namespace std;


/****************************************************************************
**Function: Hall constructor
**Description: Sets nameof_Room, room_id
**Parameters: string n1, int room
******************************************************************************/
Hall::Hall(string n1, int room)
{

	nameof_Room = n1;
	room_id = room;

	if (room_id == 2 || room_id == 9 || room_id == 8 || room_id == 15)
		door1 = false;
	else
		door1 = true;

}


/****************************************************************************
**Function: Hall default constructor
**Description:
**Parameters:
******************************************************************************/
Hall::Hall()
{

}



/****************************************************************************
**Function:roomCheck
**Description: Allows user to get account or look around
**Parameters:-
******************************************************************************/
void Hall::roomCheck()
{
	int option = 0;
	srand(time(0));

	cout << "<**************>" << endl;

	cout << "1. To get an account of the room" << endl;

	cout << "2. To look around the room" << endl;

	cout << "<**************>" << endl;

	cin >> option;

	if (option == 1)
		account();
	if (option == 2)
	{


		if (room_id == 2 || room_id == 8 || room_id == 9 || room_id == 15)
		{
			string lever;

			int t1 = rand() % 2 + 1;

			cout << "There are two levers to choose from." << endl;

			cout << "You have two options: Left or Right " << endl;

			cin >> lever;

			if (t1 == 1)
			{
				if (lever == "right")
					cout << "Hmm.. nothing happened, what about the other??" << endl;

				if (lever == "left")
				{
					cout << "The gate in the distance opened up" << endl;
					door1 = true;
				}
			}
			else
			{
				if (lever == "right")
				{
					cout << "The gate in the distance opened up" << endl;
					door1 = true;
				}
				if (lever == "left")
				{
					cout << "Hmm.. nothing happened, what about the other?" << endl;
				}
			}
		}




		if (room_id == 4 || room_id ==5 || room_id == 14)
			cout << "Nothing interesting happens" << endl;
	}

}



/****************************************************************************
**Function: account
**Description: Gives user account of their surroundings
**Parameters:-
******************************************************************************/
void Hall::account()
{
	if (room_id == 2 || room_id == 9 || room_id == 8 || room_id == 15)
	{
		cout << "This seems like a normal hallway." << endl;

		cout << "There are two levers next to the door.." << endl;

	}
	else
	{

		cout << "This is a normal hallway." << endl;


	}



}
