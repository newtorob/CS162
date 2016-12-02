/*********************************************************************
** Program Filename: Doodlebug.cpp
** Author: Robert Newton
** Date: 10/29/2016
** Description: The implementation file for Doodlebug,
**part of the lab5 ant and doodlebug program
*********************************************************************/

#include "Doodlebug.hpp"
#include <iostream>
using std::cout;
using std::cin;
using std::endl;
using std::string;

/*************************************************************
 **Function:          Doodlebug
 **Description:     sets the inherited members, initializes starve to zero.
 **Parameters:      int(x-coord), int (y-coord), string (name),
 ** Pre-Conditions: N/A
 **Post-Conditions: N/A
 **Return N/A
 *************************************************************/
Doodlebug::Doodlebug(int xCoord, int yCoord, string name, int t):Critter(xCoord, yCoord, name, t)
{
    
    starve = 0;
}

 /*************************************************************
 **Function:        getStarve
 **Description:     returns starve
 **Parameters:      N/A
 ** Pre-Conditions: N/A
 **Post-Conditions: N/A
 **Return: returns starve
 *************************************************************/
int Doodlebug::getStarve()
{
    return starve;
}


 /*************************************************************
 **Function:        movement
 **Description:     takes 2d array by reference, doodlebug checks
 **for ant, if theres an ant, it eats it and starve is set to 0, 
 **otherwise, starve is set to zero, otherwise, if theres no ant, we
 ** add 1 to starve and lived 
 **Parameters:      critter, array, int, int
 ** Pre-Conditions: array must be initialized
 **Post-Conditions: will be different as passed by reference
 **Return N/A
 *************************************************************/
void Doodlebug::movement(Critter ***& gArray, int ROWS, int COLS)
{
 
   
    if(x > 0 && gArray[x-1][y] != NULL && gArray[x-1][y]->getType() == 1)
    {
        //doodle eats up
        gArray[x-1][y] = gArray[x][y];
        gArray[x][y] = NULL;
        x = x-1;
        starve = 0;
        lived += 1;
        
    }
 
    else if(x < (ROWS - 1) && gArray[x+1][y] != NULL && gArray[x+1][y]->getType() == 1)
    {
        //doodle eats down
        gArray[x+1][y] = gArray[x][y];      
        gArray[x][y] = NULL;        
        x = x+1;        
        starve = 0;
        lived += 1;
    }
   
    else if(y > 0 && gArray[x][y-1] != NULL && gArray[x][y-1]->getType() == 1)
    {
        //doodle eats left
        gArray[x][y-1] = gArray[x][y];
        gArray[x][y] = NULL;
        y = y-1;
        starve = 0;
        lived += 1;
    }

    else if(y < (COLS - 1) && gArray[x][y+1] != NULL && gArray[x][y+1]->getType() == 1)
    {
        //doodle eats right
        gArray[x][y+1] = gArray[x][y];
        gArray[x][y] = NULL;
        y = y+1;
        starve = 0;
        lived += 1;
    }
    else{
        //no ants, doodle moves with the ants
        int random = rand()%4;
    
        //try to move up
        if(random == 0 && x > 0)
        {
            if(gArray[x-1][y] == NULL)
            {
                gArray[x-1][y] = gArray[x][y];
                gArray[x][y] = NULL;
                x= x-1;
                starve += 1;
                lived += 1;
            }
        }

        else if(random == 1 && x < (ROWS-2))
        {
            if(gArray[x+1][y] == NULL)
            {
                //move doodle down
                gArray[x+1][y] = gArray[x][y];
                gArray[x][y] = NULL;
                x = x+1;
                starve += 1;
                lived += 1;
            }
        }

        else if(random == 2 && y > 0)
        {
            if(gArray[x][y-1] == NULL)
            {
                //move doodle left
                gArray[x][y-1] = gArray[x][y];
                gArray[x][y] = NULL;
                y = y-1;
                starve += 1;
                lived += 1;
            }
        }

        else if(random == 3 && y < (COLS - 2))
        {
            if(gArray[x][y+1] == NULL)
            {
                //move doodle right
                gArray[x][y+1] = gArray[x][y];
                gArray[x][y] = NULL;
                y = y+1;
                starve += 1;
                lived += 1;
            }
        }
    }
}



  /*************************************************************
 **Function:        breeding
 **Description:     takes 2d array by reference, if it finds an empty cell
 **around doodle and the member is does not equal zero then it breeds.
 **Parameters:      critter, array, int, int, int
 ** Pre-Conditions: array must be initialized
 **Post-Conditions: will be different as passed by reference
 **Return N/A
 *************************************************************/
void Doodlebug::breeding(Critter ***& gArray, int ROWS, int COLS, int surviveNum)
{
    //breeding only done if it is not 0 & its divisible  by 8
    if(surviveNum != 0 && surviveNum % 8 == 0)
    {
      
        if(x > 0 && gArray[x-1][y] != NULL)
        {
            
            gArray[x-1][y] = new Doodlebug(x-1, y, "X", 2);
        }
        
        if(x < (ROWS - 1) && gArray[x+1][y] != NULL)
        {
            gArray[x+1][y] = new Doodlebug(x+1, y, "X", 2);
        }
     
        else if(y > 0 && gArray[x][y-1] != NULL)
        {
            gArray[x][y-1] = new Doodlebug(x, y-1, "X", 2);
        }
        else if(y < (COLS - 1) && gArray[x][y+1] != NULL)
        {
            gArray[x][y+1] = new Doodlebug(x, y+1, "X", 2);
        }
    }
}


   /*************************************************************
 **Function:        dead
 **Description:     takes 2d array by reference, if doodle is divisible
 **by 3 and isn't 0 then it dies
 **Parameters:      critter, array, int, int, int
 ** Pre-Conditions: array must be initialized
 **Post-Conditions: will be different as passed by reference
 **Return N/A
 *************************************************************/
void Doodlebug::dead(Critter ***& gArray, int ROWS, int COLS, int starveNum)
{
    if(starveNum != 0 && starveNum % 3 == 0)
    {
        gArray[x][y] = NULL;
    }
}