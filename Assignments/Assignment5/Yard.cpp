/*********************************************************************
** Program Filename: Yard.cpp
** Author: Robert Newton
** Date: 12/06/2016
** Description: Final - Implementation file for the Yard Class functions
*********************************************************************/

#include "Yard.hpp"
#include <iostream>
using namespace std;

/****************************************************************************
**Function: yard constructor
**Description: Sets roomName, roomID, door1, and yardKey
**Parameters: string n1, int room
**Pre-Conditions: yard needs to exist
**Post-Conditions: yard can be traversed and interacted with
******************************************************************************/
Yard::Yard(string n1, int room)
{

	nameof_Room = n1;

	room_id = room;

	door1 = true;

	yardKey = false;

	usrPlants = 0;
}

/****************************************************************************
**Function: yard constructor
**Description:-
**Parameters:-
******************************************************************************/
Yard::Yard()
{

	door1 = false;

}

/****************************************************************************
**Function:examineRoom
**Description: Gives user an account of the room or the option to look around it
**Parameters:-

******************************************************************************/
void Yard::roomCheck()
{

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
		string plant;

		cout << "As you wander the room, a potted plant seems to be following you??" << endl;

		cout << "Would you like to approach the plant?" << endl;

		cin >> plant;

		if (plant == "yes" && usrPlants != 1)
		{
			cout << "You look down and see your body is trapped by ivy!!" << endl;

			cout << "The plant begins to pull you closer to it!" << endl;

			cout << "I could help you out... but you have to guess the magic numer!" << endl;

			enigma();
		}
		else
		{
			cout << "Let's not do that, tis' a silly plan!" << endl;

		}
	}



}


/****************************************************************************
**Function:account
**Description: Gives an account of the room to the user
**Parameters:-
******************************************************************************/
void Yard::account()
{
	cout << "You look and you're outside now." << endl;

	cout << " Look at the beautiful northern lights, the stars, it is magical." << endl;

	cout << "This yard is filled with all kinds of flowers." << endl;

	cout << "You feel an energy drawing you closer to a certain flower in the back..." << endl;

	cout << "It might be worth checking out." << endl;




}


/****************************************************************************
**Function: enigma
**Description: Prompts user with a puzzle
**Parameters:-

******************************************************************************/
void Yard::enigma()
{

	int b = 4;
	int t = 0;
	cout << "My number is between 1 and 10, guess it or be prepared to fave the consequences... ";
	while (t != b)
	{
		cin >> t;
		if (t == b)
		{
			cout << "Wow, you guessed it! Normally this doesn't happen..." << endl;

			cout << "I will help you with your mission! Here take this." << endl;

			cout << "You've received a key!!!" << endl;

			cout << "BADAH BAH BAH BADAHHHHH!!!!!" <<endl;

			cout << endl;
			cout << endl;

		}
		else
			cout << "Well, that wasn't it, try again! ";
	}

	yardKey = true;
	usrPlants = 1;
}
