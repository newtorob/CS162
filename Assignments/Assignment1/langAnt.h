//Robert Newton
//CS 162
//Langston's ant
//10/09/2016

#ifndef LANGANT_H
#define LANGANT_H
#include <iostream>
#include <cstdlib>
#include <ctime>

enum antDirection { N, E, S, W };

class LangAnt
{

public:
	antDirection getantDirection();
	void setantDirection(antDirection);
	void setXcoord(int);
	void setYcoord(int);
	int getXcoord();
	int getYcoord();
	LangAnt();

private:
	antDirection currentAntDirection;
	int Xcoord;
	int Ycoord;	
};


#endif
