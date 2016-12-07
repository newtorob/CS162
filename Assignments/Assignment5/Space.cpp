/*********************************************************************
** Program Filename: Space.cpp
** Author: Robert Newton
** Date: 12/06/2016
** Description: Final - Implementation file for the Space Class functions
*********************************************************************/
#include "Space.hpp"
#include <iostream>
using namespace std;

/****************************************************************************
**Function: Space default constructor
**Description: -
**Parameters:-
******************************************************************************/
Space::Space()
{

}


/****************************************************************************
**Function: Space constructor
**Description: abstract class
**Parameters: string n1, int room
******************************************************************************/
Space::Space(string n1, int room)
{

	nameof_Room = n1;


}


/****************************************************************************
**Function: returnN
**Description: Returns value North direction
**Parameters: -
******************************************************************************/
Space *Space::returnN()
{

	return n;


}


/****************************************************************************
**Function: returnS
**Description: Returns value South direction
**Parameters:-
******************************************************************************/
Space *Space::returnS()
{

	return s;

}



/****************************************************************************
**Function: returnE
**Description: Returns value East direction
**Parameters:-
******************************************************************************/
Space *Space::returnE()
{

	return e;

}


/****************************************************************************
**Function: returnW
**Description: Returns value West direction
**Parameters: -
******************************************************************************/
Space *Space::returnW()
{

	return w;

}


/****************************************************************************
**Function: setN
**Description: Sets value North direction
**Parameters: Space *room

******************************************************************************/
void Space::setN(Space *room)
{
	n = room;

}

/****************************************************************************
**Function: setE
**Description: Sets value East direction
**Parameters: Space *room
******************************************************************************/
void Space::setE(Space *room)
{
	e = room;


}


/****************************************************************************
**Function: setSouth
**Description: Sets value South direction
**Parameters: Space *room
******************************************************************************/
void Space::setS(Space *room)
{
	s = room;

}

/****************************************************************************
**Function:setWest
**Description: Sets value West direction
**Parameters: Space *room
******************************************************************************/
void Space::setW(Space *room)
{
	w = room;

}


/****************************************************************************
**Function: setCompass
**Description:Uses directions NESW, like a compass, for directions
**Parameters: Space *room, *room2, *room3, *room4
******************************************************************************/
void Space::setCompass(Space *room, Space *room2, Space *room3, Space *room4)
{
	setN(room);
	setS(room2);
	setE(room3);
	setW(room4);

}


/****************************************************************************
**Function: returnRoom
**Description: Return name of room
**Parameters:-
******************************************************************************/
string Space::returnRoom()
{

	return nameof_Room;

}


/****************************************************************************
**Function:checkCompass
**Description: Checks surrounding rooms
**Parameters:int x
******************************************************************************/
void Space::checkCompass(int x)
{
	if (x == 1)
	{
		if (returnN() != 0)
		{
			cout << "Ahh, there appears to be a door!" << endl;

			cout << returnN()->returnRoom() << endl;

		}

		else

			cout << "That's no door, thats a wall!" << endl;

	}

	if (x == 2)
	{
		if (returnS() != 0)
		{
			cout << "Ahh, there appears to be a door!" << endl;

			cout << returnS()->returnRoom() << endl;
		}
		else

			cout << "That's no door, thats a wall!" << endl;

	}

	if (x == 3)
	{
		if (returnE() != 0)
		{
			cout << "Ahh, there appers to be a door!" << endl;
			cout << returnE()->returnRoom() << endl;
		}
		else

			cout << "That's no door, thats a wall!" << endl;

	}

	if (x == 4)
	{
		if (returnW() != 0)
		{
			cout << "Ahh, there appears to be a door!" << endl;
			cout << returnW()->returnRoom() << endl;
		}
		else

			cout << "That's no door, thats a wall!" << endl;

	}



}


/****************************************************************************
**Function: switchRoom
**Description: Lets player switch to different rooms
**Parameters: Space **player
******************************************************************************/
void Space::switchRoom(Space **player)
{
	int direction = 0;



	cout << "<************************>" << endl;
	cout << endl;
	cout << "1. North" << endl;
	cout << "2. South" << endl;
	cout << "3. East" << endl;
	cout << "4. West" << endl;
	cout << endl;
	cout << "<************************>" << endl;

	cin >> direction;


	switch (direction)
	{
	case 1:
		if ((*player)->returnN() == 0)
			cout << "Oops, You walk into a wall." << endl;
		else
		{
			if (door1 == true)
			{
				cout << "You walk into: " << (*player)->returnN()->returnRoom() << endl;

				(*player) = (*player)->returnN();
			}
			else
			{
				cout << "This door is locked" << endl;
			}
		}
		break;
	case 2:
		if ((*player)->returnS() == 0)
			cout << "Oops, You walk into a wall." << endl;
		else
		{
			if (door1 == true)
			{
				cout << "You walk into: " << (*player)->returnS()->returnRoom() << endl;
				(*player) = (*player)->returnS();
			}
			else
				cout << "This door is locked" << endl;
		}
		break;
	case 3:
		if ((*player)->returnE() == 0)
			cout << "Oops, You walk into a wall." << endl;
		else
		{
			if (door1 == true)
			{
				cout << "You walk into :" << (*player)->returnE()->returnRoom() << endl;
				(*player) = (*player)->returnE();
			}
			else if (room_id == 16)
			{
				cout << "You walk into: " << (*player)->returnE()->returnRoom() << endl;
				(*player) = (*player)->returnE();
			}
			else

				cout << "This door is locked" << endl;
		}
		break;
	case 4:
		if ((*player)->returnW() == 0)
			cout << "Oops, You walk into a wall." << endl;
		else
		{
			if (door1 == true)
			{
				cout << "You walk into: " << (*player)->returnW()->returnRoom() << endl;
				(*player) = (*player)->returnW();
			}
			else if (room_id == 16)
			{
				cout << "You walk into: " << (*player)->returnW()->returnRoom() << endl;
				(*player) = (*player)->returnW();
			}
			else

				cout << "This door is locked" << endl;
		}
		break;
	}




}



/****************************************************************************
**Function: doorCheck
**Description: Sets value door1 to true
**Parameters: -
******************************************************************************/
void Space::doorCheck()
{

	door1 = true;

}


/****************************************************************************
**Function: getbrKey
**Description: Returns value for brkey (bedroom)
**Parameters:-
******************************************************************************/
bool Space::getbrKey()
{

	return brKey;

}


/****************************************************************************
**Function: setbrKey
**Description: Sets brKey to false. to stop multiple keys
**Parameters:-
******************************************************************************/
void Space::setbrKey()
{

	brKey = false;

}


/****************************************************************************
**Function: getYardKey
**Description: Returns value YardKey
**Parameters: -

******************************************************************************/
bool Space::getYardKey()
{
	return yardKey;
}


/****************************************************************************
**Function: setYardKey
**Description: Sets YardKey as false
**Parameters: -
******************************************************************************/
void Space::setYardKey()
{

	yardKey = false;
}


/****************************************************************************
**Function: getdrKey
**Description: Returns value for drKey (dining room)
**Parameters:-
******************************************************************************/
bool Space::getdrKey()
{
	return drKey;

}


/****************************************************************************
**Function: setdrKey
**Description: sets drKey as false
**Parameters: -
******************************************************************************/
void Space::setdrKey()
{

	drKey = false;

}



/****************************************************************************
**Function: getbossTest
**Description: Returns value for bossTest
**Parameters: -
******************************************************************************/
bool Space::getbossTest()
{

	return bossTest;


}



/****************************************************************************
**Function: setbossTest
**Description: Sets bossTest to true if false
**Parameters: -
******************************************************************************/
void Space::setbossTest()
{

	if (bossTest == false)
		bossTest = true;


}


/****************************************************************************
**Function: getPotion
**Description: Returns value for potion
**Parameters: -
******************************************************************************/
bool Space::getPotion()
{

	return potion;

}


/****************************************************************************
**Function: setPotion
**Description: Sets  potion to false for rooms, except 17
**Parameters:-

******************************************************************************/
void Space::setPotion()
{
	potion = false;

	if (room_id == 17)
		potion = true;

}


/****************************************************************************
**Function: getVictorium
**Description: Returns value of victorium, Fallout 4 reference
**Parameters: -

******************************************************************************/
bool Space::getVictorium()
{

	return victorium;

}


/****************************************************************************
**Function: setVictorium
**Description: Sets the victorium data to true
**Parameters:-

******************************************************************************/
void Space::setVictorium()
{

	victorium = true;

}
