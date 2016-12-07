/*********************************************************************
** Program Filename: BossRoom.cpp
** Author: Robert Newton
** Date: 12/06/2016
** Description: Final - Implementation file for the BossRoom Class functions
*********************************************************************/
#include "BossRoom.hpp"
#include <iostream>
using namespace std;



/****************************************************************************
**Function: BossRoom constructor
**Description: Sets nameof_Room, room_id, door1, bossTest, victorium
**Parameters: string name1, int room
******************************************************************************/
BossRoom::BossRoom(string n1, int room)
{

	nameof_Room = n1;
	room_id = room;
	door1 = true;
	bossTest = false;
	victorium = false;
}



/****************************************************************************
**Function:BossRoom default constructor
**Description:
**Parameters:

******************************************************************************/
BossRoom::BossRoom()
{


	door1 = false;


}


/****************************************************************************
**Function: roomCheck
**Description:Gives user option to get account of room or look around
**Parameters:-
******************************************************************************/
void BossRoom::roomCheck()
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
		if (potion == false)
		{
			cout << "The man screams for you by name! He is in trouble!" << endl;

			cout << "There is a faint light at the back of the room..." << endl;

			cout << "The man appears to be holding something?" << endl;

			cout << endl;
			cout << endl;
			cout << endl;


			string answer;

			cout << "Would you like to Help the man?" << endl;

			cout << "If not, you will walk toward the door.." <<endl;

			cout << "It is up to you, and it is a decision you have to live with." <<endl;

			cout << endl;
			cout << endl;
			cout << endl;

			cin >> answer;

			if (answer == "yes")
				bossFinal();
			else
			{
				cout << "To hell with this! You head towards the door!" << endl;

				cout << "The room is suddenly covered in darkness and there is no more door." << endl;

				cout << "Go see the man, he may be helpful." << endl;

				cout << endl;
				cout << endl;
				cout << endl;


			}

		}

		else
		{
			cout << "You try to hand the potion you mixed to the man, but he refuses." << endl;

			cout << "He is dying, he knows it, he tells you to drink the potion in a gaps." << endl;

			cout << "You drink it, what do you have to lose right?" << endl;

			cout << endl;
			cout << endl;
			cout << endl;


			victorium = true;



		}


	}




}


/****************************************************************************
**Function: account
**Description:Gives account of room to the user
**Parameters: -
******************************************************************************/
void BossRoom::account()
{
	cout << "You see a man hunched over in the middle of the room" << endl;

	cout << "Something isn't quite right here." << endl;



}



/****************************************************************************
**Function: bossFinal
**Description: Gives user text based instructions on a puzzle
**Parameters: -
******************************************************************************/
void BossRoom::bossFinal()
{
	cout << "As you approach, the main only looks at you, he is in too much pain to speak." << endl;

	cout << "He hands you the peice of paper in his hands." << endl;

	cout << "It's instructions to the lab!!" << endl;

	cout << "You turn and head back that way!" << endl;

	bossTest = true;

}
