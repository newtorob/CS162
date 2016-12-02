//Robert Newton
//CS 162
//Langston's ant
//10/09/2016

#include "langBoard.h"
#include <iostream>

using std::cin;
using std::cout;
using std::endl;

LangBoard::LangBoard(int rowTotal, int colTotal)
{
	slateArray = new boardCh*[rowTotal];
	for (int i = 0; i < rowTotal; i++)
	{
		slateArray[i] = new boardCh[colTotal];
	}

	for (int i = 0; i < rowTotal; i++)
	{
		for (int j = 0; j < colTotal; j++)
		{
			slateArray[i][j] = white;
		}
	}
}

LangAnt* LangBoard::getlangAnt()
{
	return &ant;
}


boardCh** LangBoard::getlangBoard()
{
	return slateArray;
}

void LangBoard::setBoardCols(int colTotal)
{
	boardCols = colTotal;
}

void LangBoard::setBoardRows(int rowTotal)
{
	boardRows = rowTotal;
}

void LangBoard::displayLangBoard()

{
	for (int i = 0; i < boardRows; i++)
	{
		for (int j = 0; j < boardCols; j++)
		{
			
			if (i == ant.getXcoord() && j == ant.getYcoord())
			{
				std::cout << '*' << ' ';
			}
			else if (slateArray[i][j] == white)
			{
				std::cout << ' ' << ' ';
			}
			else
			{
				std::cout << '#' << ' ';
			}
		}
		std::cout << std::endl;
	}
}

void LangBoard::left()
//left move
{
	switch (ant.getantDirection()) {
	case N:
	{
		ant.setYcoord(ant.getYcoord() - 1);
		ant.setantDirection(W);
		break;
	}
	case E:
	{
		ant.setXcoord(ant.getXcoord() - 1);
		ant.setantDirection(N);
		break;
	}
	case S:
	{
		ant.setYcoord(ant.getYcoord() + 1);
		ant.setantDirection(E);
		break;
	}
	case W:
	{
		ant.setXcoord(ant.getXcoord() + 1);
		ant.setantDirection(S);
		break;
	}
	}
}

void LangBoard::right()
//right move
{
	switch (ant.getantDirection()) {
	case N:
	{
		ant.setYcoord(ant.getYcoord() + 1);
		ant.setantDirection(E);
		break;
	}
	case E:
	{
		ant.setXcoord(ant.getXcoord() + 1);
		ant.setantDirection(S);
		break;
	}
	case S:
	{
		ant.setYcoord(ant.getYcoord() - 1);
		ant.setantDirection(W);
		break;
	}
	case W:
	{
		ant.setXcoord(ant.getXcoord() - 1);
		ant.setantDirection(N);
		break;
	}
	}
}

bool LangBoard::safe()
//this will determine if the move is safe or not
{
	bool safe = true;
	if (slateArray[ant.getXcoord()][ant.getYcoord()] == white)
	{
		switch (ant.getantDirection())
		{
		case N:
		{
			if (ant.getYcoord() + 1 >= boardCols)
			{
				safe = false;
			}
			break;
		}
		case E:
		{
			if (ant.getXcoord() + 1 >= boardRows)
			{
				safe = false;
			}
			break;
		}
		case S:
		{
			if (ant.getYcoord() - 1 < 0)
			{
				safe = false;
			}
			break;
		}
		case W:
		{
			if (ant.getXcoord() - 1 < 0)
			{
				safe = false;
			}
			break;
		}
		}
	}
	else
	{
		switch (ant.getantDirection()) {
		case N:
		{
			if (ant.getYcoord() - 1 < 0)
			{
				safe = false;
			}
			break;
		}
		case E:
		{
			if (ant.getXcoord() - 1 < 0)
			{
				safe = false;
			}
			break;
		}
		case S:
		{
			if (ant.getYcoord() + 1 >= boardCols)
			{
				safe = false;
			}
			break;
		}
		case W:
		{
			if (ant.getXcoord() + 1 >= boardRows)
			{
				safe = false;
			}
			break;
		}

		}
	}

		return safe;
}