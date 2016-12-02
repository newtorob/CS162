//Robert Newton
//CS 162
//Langston's ant
//10/09/2016

#ifndef LANGBOARD_H
#define LANGBOARD_H

#include "langAnt.h"


enum boardCh {white, black, ANT};

class LangBoard
{
public:
	
	LangBoard(int rowTotal, int colTotal);
	void displayLangBoard();
	void setBoardRows(int rowTotal);
	void setBoardCols(int colTotal);
	LangAnt* getlangAnt();
	void left();
	void right();
	boardCh** getlangBoard();
	bool safe();
	
private:
	boardCh** slateArray;
	int boardRows;
	int boardCols;
	LangAnt ant;
};

#endif
