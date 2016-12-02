/*********************************************************************
** Program Filename:Ant.hpp
** Author:Robert Newton
** Date: 10/29/2016
** Description:Implements the header file for Ant, part 
** the lab5 ant and doodlebug program.
*********************************************************************/
#ifndef ANT_HPP
#define ANT_HPP
#include <iostream>
#include <string>
#include <cstdlib>
#include "Critter.hpp"
#include "Grid.hpp"
using std::cout;
using std::cin;
using std::endl;
using std::string;

class Grid;

class Ant:public Critter
{
public:
    Ant(int, int, string, int);
    
    virtual void movement(Critter ***&, int, int);
    
    virtual void breeding(Critter ***&, int, int, int);
    
};
#endif