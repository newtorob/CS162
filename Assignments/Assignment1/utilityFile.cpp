//Robert Newton
//CS 162
//Langston's ant
//10/09/2016

#include "utilityFile.h"
#include <iostream>

using std::cin;
using std::cout;
using std::endl;
using std::numeric_limits;
using std::streamsize;


//An easy reusable script to check the validity of input and clear anything in the cin buffer.
void validInput()
{
	if (!cin.good())
	{
		cin.clear();
		cin.ignore(numeric_limits<streamsize>::max(), '\n');
	}
}

//Clears the cin buffer
void inputClear()
{
	cin.clear();
	cin.ignore(numeric_limits<streamsize>::max(), '\n');
}

//A reusable menu that can be modified for future programs
void gameMenu(int &userX, int &userY, int tableRows, int tableCols) {

	int userChoice;
	do {
		cout << "User, you can enter your own starting coordinates or I can select them for you. " <<endl;
		cout << "1. You choose the coordinates" << endl;
		cout << "2. Computer chooses the coordinates" << endl;
		cout << "Please enter: 1 or 2: ";
		cin >> userChoice;
		validInput();
		if (userChoice == 1)
		{
			inputClear();
			do{
				cout << "Enter in the X coordinate for " << endl;
				cin >> userX >> userY;
				validInput();
				if (userX < 0 || userX >= tableRows || userY < 0 || userY >= tableCols)
				{
					cout << "Please do not enter a coordinate that is beyond the bounds of the board you've created.  \nRemember that arrays count up from 0, so if your board size is 50x50, your coordinate options are 0 - 49 inclusive." << endl;
				}
			} while (userX < 0 || userX >= tableRows ||userY < 0 || userY >= tableCols);
		}
		else if (userChoice == 2)
		{
			inputClear();
			userX = rand() % tableRows;
			userY = rand() % tableCols;
		}
		else
		{
			cout << "Please enter either 1 or 2." << endl;
		}
	} while (userChoice!= 1 && userChoice != 2);
		
}