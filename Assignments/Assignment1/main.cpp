//Robert Newton
//CS 162
//Langston's ant
//10/09/2016

#include <iostream>
#include <limits>
#include <ctime>
#include <cstdlib>

#include "utilityFile.h"
#include "langBoard.h"

using std::cin;
using std::cout;
using std::endl;

int main()
{
	srand((unsigned int)time(NULL));
	//starting values for our rows and colums, steps taken and the bool to determine if the game is done early
	int boardRows, boardCols, numSteps;
	int userX = 0;
	int userY = 0;
	int steps = 0;
	bool doneEarly = false;
	

	
	do {
			cout << "Please enter the size of your game board, 50 by 50 works well in my opinion. " << endl; 
			//here we get the size of the game board
			cin >> boardRows;
			cin >> boardCols;
			validInput();
			//we ensure the input was done correctly
			if (boardRows < 1 || boardCols < 1)	{
			cout << "You must enter a number greater than 0, and you can only enter numbers." << endl;
			}
		} while (boardRows < 1 || boardCols < 1);

	inputClear(); //clear the input and create the board
	LangBoard LangBoard(boardRows, boardCols);
	LangBoard.setBoardRows(boardRows);
	LangBoard.setBoardCols(boardCols);

	
	do {
			cout << "Please enter the amount of steps for your ant to take, I recommend at least 100 to see your results: " <<endl;
			//get the steps from the user
			cin >> numSteps;
			if (numSteps < 1)
			{
				cout << "You must enter at least 1 step for the ant!" << endl;
			}
			//must be at least 1 step
		} while (numSteps < 1);


	//gamemenu will get the coordinates if the user wants to enter them.
	gameMenu(userX, userY, boardRows, boardCols); 
	LangBoard.getlangAnt()->setXcoord(userX);
	LangBoard.getlangAnt()->setYcoord(userY);

	cout << "Your stating coordinates are: " << LangBoard.getlangAnt()->getXcoord() << ", " << LangBoard.getlangAnt()->getYcoord() <<endl;

	
	LangBoard.displayLangBoard();
	//dissplay the board for the user
	
	//here we make sure steps are safe, which is checking to make sure it doesn't start out of bounds
	do {
		if (LangBoard.safe())
		{
			if (LangBoard.getlangBoard()[LangBoard.getlangAnt()->getXcoord()][LangBoard.getlangAnt()->getYcoord()] == white)
			{ 
				LangBoard.getlangBoard()[LangBoard.getlangAnt()->getXcoord()][LangBoard.getlangAnt()->getYcoord()] = black;
				LangBoard.right();
				steps++;
				LangBoard.displayLangBoard();
			}
			else
			{
				LangBoard.getlangBoard()[LangBoard.getlangAnt()->getXcoord()][LangBoard.getlangAnt()->getYcoord()] = white;
				LangBoard.left();
				steps++;
				LangBoard.displayLangBoard();
			}
		}
		else
		{
			doneEarly = true;
		}

	} while ((steps < numSteps) && (doneEarly == false));

	//shows user the steps taken.
	if (doneEarly == true)
	{
		cout << "The game ended becuse the ant went out of bounds! He went "<< numSteps << " steps." << endl; 
	}
	else
	{
		cout << "Steps your ant took: " << steps << endl;//shows the amount of steps
	}

	return 0;	
} 
