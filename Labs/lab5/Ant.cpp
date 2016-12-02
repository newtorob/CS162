/*********************************************************************
** Program Filename: Ant.cpp
** Author: Robert Newton    
** Date: 10/29/2016
** Description: The implementation file for our ant header file, 
**part of the lab5 ant and doodlebug program.
*********************************************************************/

#include "Ant.hpp"
#include <iostream>
using std::cout;
using std::cin;
using std::endl;
using std::string;


   /*************************************************************
 **Function:        ant
 **Description:     constructor
 **Parameters:      int int string : Critter 
 ** Pre-Conditions: N/A
 **Post-Conditions: N/A
 **Return N/A
 *************************************************************/
Ant::Ant(int xC, int yC, string name, int t):Critter(xC, yC, name, t)
{
       
}


   /*************************************************************
 **Function:        movement
 **Description:     takes 2d array by reference, ant moves randomly
 **if cell in the direction is taken or out of bounds, ant stays put.
 **Parameters:      critter, array, int, int, int
 ** Pre-Conditions: array must be initialized
 **Post-Conditions: will be different as passed by reference
 **Return N/A
 *************************************************************/
void Ant::movement(Critter ***& gArray, int ROWS, int COLS)
{
    int random = rand()%4;
    
    //move up
    if(random == 0 && x > 0)
    {
        if(gArray[x-1][y] == NULL)
        {
            gArray[x-1][y] = gArray[x][y];
            gArray[x][y] = NULL;
            x = x-1;
        }
    }
    //move down
    else if(random == 1 && x < (ROWS-2))
    {
        if(gArray[x+1][y] == NULL)
        {
            gArray[x+1][y] = gArray[x][y];
            gArray[x][y] = NULL;
            x = x+1;
        }
    }
    //move left
    else if(random == 2 && y > 0)
    {
        if(gArray[x][y-1] == NULL)
        {
            gArray[x][y-1] = gArray[x][y];
            gArray[x][y] = NULL;
            y = y-1;
        }
    }
    //move right
    else if(random == 3 && y < (COLS - 2))
    {
        if(gArray[x][y+1] == NULL)
        {
            gArray[x][y+1] = gArray[x][y];
            gArray[x][y] = NULL;
            y = y+1;
        }
    }

    lived += 1;
}



   /*************************************************************
 **Function:        breeding
 **Description:     takes 2d array by reference, the opposite of doodle, 
 ** if the ant is divisible by 3 and isn't 0,it breeds
 **Parameters:      critter, array, int, int, int
 ** Pre-Conditions: array must be initialized
 **Post-Conditions: will be different as passed by reference
 **Return N/A
 *************************************************************/
void Ant::breeding(Critter ***& gArray, int ROWS, int COLS, int sNum)
{
    //breeding only when dividing by 3 is even
    if(sNum != 0 && sNum % 3 == 0)
    {
        //breed up
        if(x > 0 && gArray[x-1][y] != NULL)
        {
            gArray[x-1][y] = new Ant(x-1, y, "O", 1);
        }
        //breed down
        else if(x < (ROWS - 1) && gArray[x+1][y] != NULL)
        {
            gArray[x+1][y] = new Ant(x+1, y, "O", 1);
        }
        //breed left
        else if(y > 0 && gArray[x][y-1] != NULL)
        {
            gArray[x][y-1] = new Ant(x, y-1, "O", 1);
        }
        //breed right
        else if(y < (COLS - 1) && gArray[x][y+1] != NULL)
        {
            gArray[x][y+1] = new Ant(x, y+1, "O", 1);
        }
    }
}
