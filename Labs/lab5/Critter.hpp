/*********************************************************************
** Program Filename: Critter.hpp
** Author: Robert Newton
** Date: 10/29/2016
** Description: Initializes the Critter header file part of
** the lab5 ant and doodlebug program.
*********************************************************************/

#ifndef CRITTER_HPP
#define CRITTER_HPP
#include <iostream>
#include <string>
#include <cstdlib>
using std::cout;
using std::cin;
using std::endl;
using std::string;

class Grid;

enum CritterType {ANT, DOODLEBUG};

class Critter
{
protected:
    int x;
    int y;
    int lived;
    string name;
    int type;

public:
    Critter();
    Critter(int, int, string, int);
    
    int getXc();
    int getYc();
    int getLived();
    string getName();
    int getType();
    
    void setCoords(int, int);
    void setXc(int);
    void setYc(int);
    void setName(string);
    void setType(int);
    
    //VIRTUAL FUNCTIONS
    virtual void movement(Critter ***&, int, int) = 0;
    virtual void breeding(Critter ***&, int, int, int) = 0;
    
    
};
#endif