/*********************************************************************
** Program Filename: Main.cpp
** Author: Robert Newton    
** Date: 10/29/2016
** Description: The main lab 5 file for critter, doodlebug and ant.
*********************************************************************/
#include <iostream>
#include <string>
#include <cstdlib>
#include "Grid.hpp"


int main()
{
    //TO USE RANDOM # GENERATOR
    unsigned seed;
    seed = time(0);
    srand(seed);
    
    Grid grid;
    grid.choices();
    
    return 0;
}