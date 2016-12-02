/*********************************************************************
** Program Filename: Grid.hpp
** Author: Robert Newton
** Date: 10/29/2016
** Description: Initializes the header file for Grid, this sets the
** grid of the game in lab 5 for the ant and doodlebug program

*********************************************************************/

#ifndef GRID_HPP
#define GRID_HPP
#include <iostream>
#include <string>
#include <cstdlib>
#include "Critter.hpp"
#include "Ant.hpp"
#include "Doodlebug.hpp"
using std::cout;
using std::cin;
using std::endl;
using std::string;

class Grid
{

    friend class Ant;
    friend class Critter;
    
private:
    int numAnts;
    int numDoodle;
    
    int ROWS;
    int COLS;
    int steps;
    
    Critter ***gridArray;       
    
public:
    Grid();
    
    void choices();
    
    void play();
    
    void printGrid(Critter ***, int, int);
    
    Critter *** getGrid();
    
    int quit();
    
    
};
#endif