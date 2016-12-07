/*********************************************************************
** Program Filename: Main.cpp
** Author: Robert Newton
** Date: 12/06/2016
** Description: Final - Main file for the mansion game!!
*********************************************************************/

#include <iostream>
#include <vector>
#include <algorithm>


#include "Play.hpp"
#include "Space.hpp"
#include "Norm.hpp"
#include "Rooms.hpp"
#include "Doors.hpp"
#include "Yard.hpp"
#include "Hall.hpp"
#include "BossRoom.hpp"
#include "UsrInv.hpp"


using namespace std;

bool checkKey(UsrInv &inv1);
void cheatCodes();



/****************************************************************************
**Function: main
**Description: Runs the game
**Parameters: -

******************************************************************************/
int main()
{

	Norm *room1 = new Norm("Entry Way - Room 1", 1);

	Hall *room2 = new Hall("Hall - Room 2", 2);

	Norm *room3 = new Norm("Dining Room - Room 3", 3);

	Hall *room4 = new Hall("Hall - Room4", 4);

	Hall *room5 = new Hall("Hall - Room 5", 5);

	Norm *room6 = new Norm("Living Room - Room 6", 6);

	Norm *room7 = new Norm("Lab - Room 7", 7);

	Hall *room8 = new Hall("Hall - Room 8", 8);

	Hall *room9 = new Hall("Hall - Room 9", 9);

	Norm *room10 = new Norm("Greenhouse - Room 10", 10);

	Norm *room11 = new Norm("Kitchen - Room 11", 11);

	Yard *room12 = new Yard("Yard - Room 12", 12);

	Rooms *room13 = new Rooms("Bedroom - Room 13", 13);

	Hall *room14 = new Hall("Hall - Room 14", 14);

	Hall *room15 = new Hall("Hall - Room 15", 15);

	Door *room16 = new Door("Door Room - Room 16", 16);

	BossRoom *room17 = new BossRoom("Boss Room - Room 17", 17);


	//This is the section for pointers
	//we set all pointers here for the compass
	//this will help guide user through the mansion

	room1->setCompass(room2, 0, 0, 0);

	room2->setCompass(room3, room1, 0, 0);

	room3->setCompass(0, room2, room4, room5);

	room4->setCompass(0, 0, room6, room3);

	room5->setCompass(0, 0, room3, room7);

	room6->setCompass(room8, 0, 0, room4);

	room7->setCompass(room9, 0, room5, 0);

	room8->setCompass(room10, room6, 0, 0);

	room9->setCompass(room11, room7, 0, 0);

	room10->setCompass(room12, room8, 0, room14);

	room11->setCompass(room13, room9, room15, 0);

	room12->setCompass(0, room10, 0, 0);

	room13->setCompass(0, room11, 0, 0);

	room14->setCompass(0, 0, room10, room16);

	room15->setCompass(0, 0, room16, room11);

	room16->setCompass(room17, 0, room14, room15);

	room17->setCompass(0, room16, 0, 0);


	//creates the game
	Play Play1;

	//show instructions for user
	Play1.instruct();

	string cheat;

	cout << "TA section: would you like to see the answers?" << endl;

	cin >> cheat;

	if (cheat == "yes")

		cheatCodes();

	else

		cout << "The Game is Starting!!! " << endl;



	bool victorium = false;

	//create UsrInv
	UsrInv inv1;


	//set position for user
	Space *player = room1;

	string position = player->returnRoom();

	int option = 0;

	//Create items for user
	Item *brKey = new Item("bedroom key");

	Item *yardKey = new Item("yard key");

	Item *drKey = new Item("dining room key");

	Item *stabilityPotion = new Item("stability potion");




	while (room17->getVictorium() == false && Play1.getStability() != 0)
	{
		Play1.setMove();    //set to false each turn

		//perform key check
		if (checkKey(inv1) == true)
				room16->getKeyInv();

		string position = player->returnRoom();


		cout << endl;
		cout << endl;
		cout << endl;



		while (Play1.getMove() == false)
		{



			if (room13->getbrKey() == true)
			{
				inv1.addItems(brKey);

				room13->setbrKey();

			}

			if (room12->getYardKey() == true)
			{
				inv1.addItems(yardKey);

				room12->setYardKey();
			}

			if (room3->getdrKey() == true)
			{
				inv1.addItems(drKey);
				room3->setdrKey();
			}

			if (room17->getbossTest() == true)
			{
				room7->setbossTest();
			}

			if (room7->getPotion() == true)
			{
				inv1.addItems(stabilityPotion);

				room7->setPotion();

				room17->setPotion();
			}

			Play1.mainMenu();
			cin >> option;

			switch (option)
			{
			case 1:
			{
				int check = Play1.showCompass();

				player->checkCompass(check);

				break;
			}
			case 2:
			{
				player->switchRoom(&player);
				Play1.setMove();  //should set to true
				break;
			}
			case 3:
				cout << "Check Room: " << endl;
				player->roomCheck();
				Play1.setMove();
				break;
			case 4:
			{
				Play1.showStability();
				break;
			}
			case 5:
				inv1.showItems();
				break;

			}



		}




		Play1.dropStability();
		position = player->returnRoom();

	}

	if (Play1.getStability() != 0)
	{
		cout << endl;
		cout << endl;
		cout << endl;

		cout << "The darkness leaves, you look up and the door is open again!" << endl;

		cout << "You leave the house unsure whether that was a dream or real life..." << endl;

		cout << "But a sense of relief washes over you when you smell fresh air, and you keep walking forward." << endl;

	}

	else if (Play1.getStability() == 0)
	{
		cout << endl << endl << endl;

		cout << "You slowly see the room spinning, further and further into darkness. You realize, this is the end and you're never leaving." << endl;

		cout << "Game Over" << endl;


	}

	delete room1;

	room1 = 0;

	delete room2;

	room2 = 0;

	delete room3;

	room3 = 0;

	delete room4;

	room4 = 0;

	delete room5;

	room5 = 0;

	delete room6;

	room6 = 0;

	delete room7;

	room7 = 0;

	delete room8;

	room8 = 0;

	delete room9;

	room9 = 0;

	delete room10;

	room10 = 0;

	delete room11;

	room11 = 0;

	delete room12;

	room12 = 0;

	delete room13;

	room13 = 0;

	delete room14;

	room14 = 0;

	delete room15;

	room15 = 0;

	delete room16;

	room16 = 0;

	delete room17;

	room17 = 0;

	delete brKey;

	brKey = 0;

	delete yardKey;

	yardKey = 0;

	delete drKey;

	drKey = 0;

	delete stabilityPotion;

	stabilityPotion = 0;

	return 0;
}


/****************************************************************************
**Function: checkKey
**Description: Checks UsrInv for keys
**Parameters: UsrInv &inv1
******************************************************************************/
bool checkKey(UsrInv &inv1)
{
	int keys = 0;
	for (int i = 0; i < inv1.getSelection().size(); i++)
	{
		if (inv1.getSelection()[i].getitemName() == "bedroom key")
			keys++;
		if (inv1.getSelection()[i].getitemName() == "yard key")
			keys++;
		if (inv1.getSelection()[i].getitemName() == "dining room key")
			keys++;
	}


	if (keys == 3)
	{
		return true;
	}

	return false;
}


//TA/Grading menu
void cheatCodes()
{

	cout << "The keys are the dining room, the yard, and the bedroom" << endl;

	cout << "Keep saying yes for the dining key" << endl;

	cout << "For the yard key,the answer is 4" << endl;

	cout << "For the bedroom, its 16,4,2,5 " << endl;

	cout << "Insert keys into door in door room" << endl;

	cout << "Help the man. Go to lab now" << endl;

	cout << "Put potions in this order: blue red green yellow orange" << endl;


	cout << "return to man, talk to him & win" << endl;

	cout << "You only have about 50 turns" << endl;





}
