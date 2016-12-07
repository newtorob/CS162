/*********************************************************************
** Program Filename: Rooms.cpp
** Author: Robert Newton
** Date: 12/06/2016
** Description: Final - Implementation file for the Rooms Class functions
*********************************************************************/

#include "Rooms.hpp"
#include <iostream>
#include <string>
using namespace std;


/****************************************************************************
**Function: Rooms constructor
**Description: sets roomName,roomID,door1, bedKey
**Parameters: string name1, int room
******************************************************************************/
Rooms::Rooms(string n1, int room)
{

	nameof_Room = n1;
	room_id = room;
	door1 = true;
	brKey = false;
	brCheck = 0;
}

/****************************************************************************
**Function: Rooms default constructor
**Description:
**Parameters:
******************************************************************************/
Rooms::Rooms()
{

	door1 = false;


}

/****************************************************************************
**Function: roomCheck
**Description:Gives user option to get account of room or look around
**Parameters: -
******************************************************************************/
void Rooms::roomCheck()
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
		string ladyPaint;
		cout << "There is an old painting of an even older woman." <<endl;
		cout << "As you look closer, the fram looks more and more crooked..." << endl;
		cout << "Would you like to fix it??" << endl;

		cin >> ladyPaint;

		if (ladyPaint == "yes" && brCheck != 1)
		{
			cout << "As you are adjusting the picture, you notice, it begins to speak to you!" << endl;

			roomEnigma();
		}
		else
		{
			cout << "We shouldn't do that again..." << endl;
		}
	}

}

/****************************************************************************
**Function: account
**Description: Gives user account of room
**Parameters: -
******************************************************************************/
void Rooms::account()
{

	cout << "A dusty, unused bedroom. Probably hasn't been visisted in decades" << endl;
	cout << "A picture on the wall looks off compared to the rest of the room" << endl;


}


/****************************************************************************
**Function:roomEnigma
**Description: Gives user an enigma to solve in the room
**Parameters: -
******************************************************************************/
void Rooms::roomEnigma()
{
	cout << "You must use the following number, and put them correctly into the equation." << endl;

	cout << "The world revolves around math, this mansion is no different.." << endl;

	cout << "Answer the folowing question!" << endl;

	cout << "(_ - _ / _ ) x _ = 70   You have the numbers 16,2,5,4 " << endl;

	cout << "Input your answer in the following format _,_,_,_ to win" << endl;


	string answer;

	while (answer != "16,4,2,5")
	{
		cout << "Enter your guess please" << endl;
		cin >> answer;

		if (answer != "16,4,2,5")
			cout << "Wrong, try again" << endl;

	}


	cout << "You certainly are good at math!" << endl;
	cout << "NOW GET OUT!!!!!" << endl;
	cout << "Before you leave, you are given a key." << endl;

	brKey = true;
	brCheck = 1;


}
