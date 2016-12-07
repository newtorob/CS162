/*********************************************************************
** Program Filename: Norm.cpp
** Author: Robert Newton
** Date: 12/06/2016
** Description: Final - Implementation file for the Norm Class functions
*********************************************************************/
#include "Norm.hpp"
#include <iostream>
using namespace std;



/****************************************************************************
**Function:Norm constructor
**Description: Sets nameof_Room, room_id, door1, dine
**Parameters: string n1, int room
******************************************************************************/

Norm::Norm(string n1, int room)
{

	nameof_Room = n1;
	room_id = room;
	door1 = true;
	dine = 0;
}


/****************************************************************************
**Function: Norm default constructor
**Description: -
**Parameters:-
******************************************************************************/
Norm::Norm()
{

	door1 = false;

}

/****************************************************************************
**Function: roomCheck
**Description: Gives the user the option of getting an account of the current room
**or to look around the room
**Parameters:-
******************************************************************************/
void Norm::roomCheck()
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
		if (room_id == 1)
		{
			string usrAnswer;

			cout << "Would you like to approach the note?" << endl;

			cin >> usrAnswer;


			if (usrAnswer == "yes")
			{
				cout << endl;
				cout << endl;

				cout << "If you are reading this note, I am in deep trouble... Eek " << endl;

				cout << "This mansion has so many rooms!" << endl;

				cout << "The hallways are no doubt locked and may turn on you." << endl;

				cout << "Keep those keys in your inventory!" << endl;

				cout << "Keep note of your stability " << endl;

				cout << "With love, A Friend" << endl;

				cout << endl;
				cout << endl;

			}

		}

		else if (room_id == 3)
		{
			string usrAnswer;

			cout << "Do you really want to reach your hand inside?" << endl;

			cin >> usrAnswer;

			if (usrAnswer == "yes" && dine != 1)
			{
				cout << "Are you like completely sure you REEEEALLY want to reach your hand in?" << endl;
				cin >> usrAnswer;
				if (usrAnswer == "yes")
				{
					cout << "Seriously... you don't know what is in there? Weren't you taught better? " << endl;
					cout << "One more chance to turn back!" << endl;
					cin >> usrAnswer;
					if (usrAnswer == "yes")
					{
						cout << "You pull out an old nasty slime covered key, that is disgusting, go clean yourself up" << endl;
						drKey = true;
						cout << endl;
						dine = 1;
					}
				}
			}
			else
			{
				cout << "Please don't do that again" << endl;
			}

		}
		else if (room_id == 6)
		{
			string usrAnswer;
			cout << "Would you like to pick up the note? " << endl;
			cin >> usrAnswer;

			if (usrAnswer == "yes")
			{
				cout << "How is your exploring going? I hope you're having a lot of fun!" << endl;

				cout << "And the hallways? How bad were they? Hopefully not too bad!" << endl;

				cout << "Did you collect some useful things?" << endl;

				cout << "If you answered no to that, go back, for you cannot proceed" << endl;

				cout << "With love, A friend" << endl;

			}

		}
		else if (room_id == 7)
		{
			string usrAnswer;

			cout << "Would you like to approach the lab bench?" << endl;

			cin >> usrAnswer;


			if (usrAnswer == "yes" && bossTest == true)
			{
				cout << "The bench is littered with several potions!" << endl;

				cout << "A voice says read the note!" << endl;

				cout << "Do you want to read the note?" << endl;

				cin >> usrAnswer;

				if (usrAnswer == "yes")
					labCheck();

			}
			else if (usrAnswer == "yes")
			{
				cout << "Without reading the note, you have no idea what these potion ingredients do.." << endl;

				cout << "Without that knowledge, you decide to go back." << endl;
			}

		}

		else
			cout << "Nothing is hidden from you" << endl;

	}
}

/****************************************************************************
**Function: account
**Description: Gives user an account of their current room
**Parameters:-
******************************************************************************/
void Norm::account()
{
	if (room_id == 1)
	{

		cout << "This is your starting room." << endl;

		cout << "Just like rock bottom, you can only go forward from here." << endl;

		cout << "Erm, I guess, that saying is, you can only go up from here..." <<endl;

		cout << "Regardles, There seems to be a note in the corner of the room." << endl;
		cout << endl;



	}

	if (room_id == 3)
	{
		cout << "This appears to be the dining room" << endl;

		cout << "Remnants of rotting food is still on the table" << endl;

		cout << "As you look closer at the food, you see something shiny, in what used to be a Turkey?" << endl;

		cout << endl;
	}

	if (room_id == 6)
	{
		cout << "This appears to be an extremely dusty living room." << endl;

		cout << "Word to the wise, don't sit in here..." << endl;

		cout << "You notice a letter on the coffee table out of the corner of your eye." << endl;

	}

	if (room_id == 7)
	{
		cout << "This is a room filled with lab equipment." << endl;

		cout << "This room is cleaner than the others, as if someone has used it lately..." << endl;

		cout << "This may be useful later..." << endl;


	}

	if (room_id == 11)
	{
		cout << "As you walked in the door, a cloud of dust spreads over you" << endl;

		cout << "Insects have claimed the kitchen as their own" << endl;

		cout << "The sink looked moldy and black" << endl;

		cout << "Maybe this is not a good time to be hungry" << endl;
	}
}

/****************************************************************************
**Function: labCheck
**Description: Prompts user to solve a puzzle
**Parameters:-
******************************************************************************/
void Norm::labCheck()
{
	cout << "What lies in front of you is 5 potion ingredients : Orange, Green, Red, Yellow, Blue" << endl;

	cout << "You remember the note that explains what you must do" << endl;

	cout << "Blue before Green" << endl;

	cout << "Red not immidiately before yellow & under no circumstances after yellow" << endl;

	cout << "Yellow can be added only if two additional potions are between it and the blue potion" << endl;

	cout << "Orange must be the last potion" << endl;

	cout << endl;

	cout << "What is the order you want to mix them in?" << endl;

	cout << "Type one in at a time and hit enter " << endl;

	cout << "Use lowercase for all the letters" << endl;

	string p1, p2, p3, p4, p5;

	cin >> p1 >> p2 >> p3 >> p4 >> p5;

	if (p1 == "blue" && p2 == "red" && p3 == "green" && p4 == "yellow" && p5 == "orange")
	{
		cout << "You hear some fizzing anda explosion of color, when the dust settles, it looks like it worked!" << endl;

		cout << "You take the potion" << endl;

		cout << "Maybe its time to head back" << endl;

		potion = true;
	}
	else
	{
		cout << "The potion explodes... Ugh" << endl;
		cout << "That definitely wasn't right." << endl;

	}






}
