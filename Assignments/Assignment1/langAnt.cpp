//Robert Newton
//CS 162
//Langston's ant
//10/09/2016

#include <iostream>

#include "langAnt.h"
using std::cin;
using std::cout;
using std::endl;

LangAnt::LangAnt()
{
	currentAntDirection = N;
	Xcoord = 0;
	Ycoord = 0;
}

antDirection LangAnt::getantDirection()
{
	return currentAntDirection;
}

void LangAnt::setantDirection(antDirection newAntDirection)
{
	currentAntDirection = newAntDirection;
}

void LangAnt::setXcoord(int newXcoord)
{
	Xcoord = newXcoord;
}

void LangAnt::setYcoord(int newYCoord)
{
	Ycoord = newYCoord;
}

int LangAnt::getXcoord()
{
	return Xcoord;
}

int LangAnt::getYcoord()
{
	return Ycoord;
}