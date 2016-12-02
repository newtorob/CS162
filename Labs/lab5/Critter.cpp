/*********************************************************************
** Program Filename: Critter.cpp
** Author: Robert Newton
** Date: 10/29/2016 
** Description:The implementation file for Critter,
**part of the lab5 ant and doodlebug program

*********************************************************************/

#include "Critter.hpp"
#include <iostream>
using std::cout;
using std::cin;
using std::endl;
using std::string;

/*************************************************************
 **Function:            Critter
 **Description:         Constructor for critter
 **Parameters:          N/A
 **Pre-Conditions:      N/A
 **Post-Conditions:     N/A
 **Returns:             N/A
 *************************************************************/
Critter::Critter()
{
    lived = 0;
}

/*************************************************************
 **Function:            Critter
 **Description:         constructor for set methods
 **Parameters:          int, int , string ,int 
 **Pre-Conditions:      N/A
 **Post-Conditions:     N/A
 **Returns:             N/A
 *************************************************************/
Critter::Critter(int x, int y, string name, int t)
{
    setXc(x);
    setYc(y);
    setName(name);
    setType(t);
    lived = 0;
}



/*************************************************************
 **Function:            getXc
 **Description:         Returns x variable
 **Parameters:          N/A
 **Pre-Conditions:      x has to be initialized 
 **Post-Conditions:     N/A
 **Returns:             x
 *************************************************************/
int Critter::getXc()
{
    return x;
}

/*************************************************************
 **Function:            getYc
 **Description:         Returns y variable
 **Parameters:          N/A
 **Pre-Conditions:      y has to be initialized 
 **Post-Conditions:     N/A
 **Returns:             y
 *************************************************************/
int Critter::getYc()
{
    return y;
}

/*************************************************************
 **Function:            getLived
 **Description:         Returns lived variable
 **Parameters:          N/A
 **Pre-Conditions:      lived has to be initialized
 **Post-Conditions:     N/A
 **Returns:             lived
 *************************************************************/
int Critter::getLived()
{
    return lived;
}

/*************************************************************
 **Function:            getName
 **Description:         Returns name variable
 **Parameters:          N/A
 **Pre-Conditions:      name has to be initialized 
 **Post-Conditions:     N/A
 **Returns:             name
 *************************************************************/
string Critter::getName()
{
    return name;
}

/*************************************************************
 **Function:            getType
 **Description:         Returns type member variable
 **Parameters:          N/A
 **Pre-Conditions:      type has to be initialized 
 **Post-Conditions:     N/A     
 **Returns:             type
 *************************************************************/
int Critter::getType()
{
    return type;
}
 

/*************************************************************
 **Function:            setCoords
 **Description:         sets x and y for setCoords
 **Parameters:          int, int
 **Pre-Conditions:      N/A
 **Post-Conditions:     N/A
 **Returns:             N/A
 *************************************************************/
void Critter::setCoords(int x, int y)
{
    setXc(x);
    setYc(y);
}

/*************************************************************
 **Function:            setXc
 **Description:         Sets the x 
 **Parameters:          int 
 **Pre-Conditions:      N/A
 **Post-Conditions:     N/A
 **Returns:             N/A
 *************************************************************/
void Critter::setXc(int xCoord)
{
    x = xCoord;
}

/*************************************************************
 **Function:            setYc
 **Description:         Sets the y 
 **Parameters:          int
 **Pre-Conditions:      N/A
 **Post-Conditions:     N/A
 **Returns:             N/A
 *************************************************************/
void Critter::setYc(int yCoord)
{
    y = yCoord;
}

/*************************************************************
 **Function:            setName
 **Description:         Sets the name
 **Parameters:          string
 **Pre-Conditions:      N/A
 **Post-Conditions:     N/A
 **Returns:             N/A
 *************************************************************/
void Critter::setName(string critName)
{
    name = critName;
}

/*************************************************************
 **Function:            setType
 **Description:         Sets the type
 **Parameters:          int 
 **Pre-Conditions:      N/A
 **Post-Conditions:     N/A
 **Returns:             N/A
 *************************************************************/
void Critter::setType(int t)
{
    type = t;
}

