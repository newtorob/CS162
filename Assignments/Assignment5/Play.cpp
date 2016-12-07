/*********************************************************************
** Program Filename: Play.cpp
** Author: Robert Newton
** Date: 12/06/2016
** Description: Final - Implementation file for the Play Class functions
*********************************************************************/
#include "Play.hpp"

#include <iostream>
using namespace std;



/****************************************************************************
**Function: Play default constructor
**Description: Sets stability level and moveMade
**Parameters: -
**Pre-Conditions: -
**Post-Conditions: Play can start
******************************************************************************/
Play::Play()
{

	stability = 75;

	move = true;

}



/****************************************************************************
**Function: instruct
**Description: Reads instructions at the beginning of Play
**Parameters:-
**Pre-Conditions: Play must exist
**Post-Conditions: Movement can begin
******************************************************************************/
void Play::instruct()
{
	cout << "You awaken, to your surprise, you are on a floor, in a house, that is not your own... " << endl;

	cout << "You see a door right behind you, and it is covered with bricks yet no one seems to be here." << endl;

	cout << "You see a tablet on the table, it reads \"Hello & welcome, your objective is to find your way out of this house.\" " << endl;

	cout << "However, if you take too long, you may lose your mind!" << endl;

	cout << "(Enter creepy malicious laugh here)" << endl;

	cout << endl;
}


/****************************************************************************
**Function:showStability
**Description: shows the current stability level
**Parameters:-
******************************************************************************/
void Play::showStability()
{

	cout << "Stability is: " << stability << " currently." << endl;

}


/****************************************************************************
**Function: dropStability
**Description: lowers the stability level
**Parameters:-
******************************************************************************/
void Play::dropStability()
{

	stability--;


}


/****************************************************************************
**Function: mainMenu
**Description: Displays menu to user
**Parameters:-
******************************************************************************/
void Play::mainMenu()
{

	cout << "<************************>" << endl;
	cout << endl;
	cout << "1. Check the Compass." << endl;
	cout << "2. Move a certain direction." << endl;
	cout << "3. Check the current room" << endl;
	cout << "4. Display your stability level" << endl;
	cout << "5. Check your inventory" << endl;
	cout << endl;
	cout << "<************************>" << endl;

}



/****************************************************************************
**Function: showCompass
**Description: Displays directions to user
**Parameters:-
******************************************************************************/
int Play::showCompass()
{
	int compass = 0;

	cout << "<************************>" << endl;
	cout << "1. N" << endl;
	cout << "2. S" << endl;
	cout << "3. E" << endl;
	cout << "4. W" << endl;
	cout << "<************************>" << endl;

	cin >> compass;


	return compass;

}


/****************************************************************************
**Function:getStability
**Description: Returns value of stability
**Parameters:-
******************************************************************************/
int Play::getStability()
{

	return stability;

}

/****************************************************************************
**Function: getMove
**Description: Returns value of move
**Parameters:-
******************************************************************************/
bool Play::getMove()
{

	return move;

}


/****************************************************************************
**Function: setMove
**Description: Sets move
**Parameters: -
******************************************************************************/
void Play::setMove()
{

	if (move == true)

		move = false;

	else

		move = true;


}
