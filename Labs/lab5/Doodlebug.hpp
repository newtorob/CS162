/*********************************************************************
** Program Filename: Doodlebug.hpp
** Author: Robert Newton
** Date: 10/29/2016
** Description: Initializes the Doodlebug header file, 
** part of the lab5 ant and doodlebug program.

*********************************************************************/

#ifndef DOODLEBUG_HPP
#define DOODLEBUG_HPP
#include <iostream>
#include <string>
#include <stdlib.h>
#include "Critter.hpp"
#include "Grid.hpp"
using std::cout;
using std::cin;
using std::endl;
using std::string;

class Grid;

class Doodlebug:public Critter
{
private:
    
    int starve;
    
public:
    Doodlebug(int, int, string, int);
    
    int getStarve();
    
    virtual void movement(Critter ***&, int, int);
    
    virtual void breeding(Critter ***&, int, int, int);
    
    void dead(Critter ***&, int, int, int);
};
#endif