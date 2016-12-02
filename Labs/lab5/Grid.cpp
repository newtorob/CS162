/*********************************************************************
** Program Filename: Grid.cpp
** Author: Robert Newton    
** Date: 10/29/2016
** Description: The implementation file for the Grid used
** for the ant and doodlebug program

*********************************************************************/

#include "Grid.hpp"
#include <iostream>
using std::cout;
using std::cin;
using std::endl;
using std::string;

/*************************************************************
 **Function:            grid
 **Description:         welcome constructor
 **Parameters:          N/A
 **Pre-Conditions:      N/A
 **Post-Conditions:     N/A
 **Returns:             N/A
 *************************************************************/
Grid::Grid()
{
    cout << "Welcome to the game Grid!"<<endl;
    
}
/*************************************************************
 **Function:            getGrid
 **Description:         returns gridArray
 **Parameters:          N/A
 **Pre-Conditions:      N/A
 **Post-Conditions:     N/A
 **Returns:             gridArray
 *************************************************************/
Critter *** Grid::getGrid()
{
    return gridArray;
}

/*************************************************************
 **Function:            choices
 **Description:         gives user options to play or quit
 **Parameters:          N/A
 **Pre-Conditions:      user must make a choice
 **Post-Conditions:     N/A
 **Returns:             N/A
 *************************************************************/
void Grid::choices()
{
    int choice;
    
    cout << "Enter 1 to play OR 2 to quit. " <<endl;
    cin >> choice;
    
    if(choice == 1) {
        play();
    }
    else if(choice ==2) {
        quit();
    }
    else {
        cout << "Please enter valid input" <<endl;
        choices();
    }
}

/*************************************************************
 **Function:            quit
 **Description:         Leaves program
 **Parameters:          N/A
 **Pre-Conditions:      N/A
 **Post-Conditions:     N/A
 **Returns:             N/A
 *************************************************************/
int Grid::quit()
{
    return 0;
}

/*************************************************************
 **Function:            play
 **Description:         dynamically allocates 2Darray, asks user
 **for steps, rows, cols, ants and doodles asks user at end 
 **of game, if they want to play again or quit
 **Parameters:          N/A
 **Pre-Conditions:      User must make a choice
 **Post-Conditions:     N/A
 **Returns:             N/A
 *************************************************************/
void Grid::play()
{
    cout << "How many steps in your game?" <<endl ;
    cin >> steps;
    cout << "Please enter the amount of rows you want to use." <<endl;
    cin >> ROWS;
    cout << "Please enter the amount of rows you want to use." <<endl;
    cin >> COLS;
    cout << "Please enter the amount of ants in your game." <<endl;
    cin >> numAnts;
    cout << "Please enter the amount of doodlebugs in your game." <<endl;
    cin >> numDoodle;
    
    
    gridArray = new Critter**[ROWS];
    for(int i = 0; i < ROWS; i++)
    {
        gridArray[i] = new Critter*[COLS];
    }
    
    
    for(int k = 0; k < ROWS; k++)
    {
        for(int m = 0; m < COLS; m++)
        {
            gridArray[k][m] = NULL;
        }
    }
    
   
    for(int i = 0; i < numDoodle; i++)
    {
        int x;
        int y;
        
        x = rand()%ROWS;
        y = rand()%COLS;
        
        gridArray[x][y] = new Doodlebug(x, y, "X", 2);
    }
    
    
    
    for(int i = 0; i < numAnts; i++)
    {
        int x;
        int y;
        
        x = rand()%ROWS;
        y = rand()%COLS;
        
        gridArray[x][y] = new Ant(x, y, "O", 1);
    }
    
    
    
    for(int i = 0; i < steps; i ++)
    {
        //doodle move
        for(int i = 0; i < ROWS; i++)
        {
            for(int j = 0; j < COLS; j++)
            {
                if(gridArray[i][j] != NULL && gridArray[i][j]->getName() == "X")
                {
                    gridArray[i][j]->movement(gridArray, ROWS, COLS);
                }
            }
        }
        
        //doodle breed
        for(int i = 0; i < ROWS; i++)
        {
            for(int j = 0; j < COLS; j++)
            {
                if(gridArray[i][j] != NULL && gridArray[i][j]->getName() == "X")
                {
                    gridArray[i][j]->breeding(gridArray, ROWS, COLS, gridArray[i][j]->getLived());
                }
            }
        }
        
        //doodle dead
        for(int i = 0; i < ROWS; i++)
        {
            for(int j = 0; j < COLS; j++)
            {
                if(gridArray[i][j] != NULL && gridArray[i][j]->getName() == "X")
                {
                    
                    Doodlebug * dptr = static_cast<Doodlebug *>(gridArray[i][j]);
                    
                    dptr->dead(gridArray, ROWS, COLS, dptr->getStarve());
                }
            }
        }
        
        
        //ant move
        for(int i = 0; i < ROWS; i++)
        {
            for(int j = 0; j < COLS; j++)
            {
                if(gridArray[i][j] != NULL && gridArray[i][j]->getName() == "O")
                {
                    gridArray[i][j]->movement(gridArray, ROWS, COLS);
                }
            }
        }
        
        //ant breed
        for(int i = 0; i < ROWS; i++)
        {
            for(int j = 0; j < COLS; j++)
            {
                if(gridArray[i][j] != NULL && gridArray[i][j]->getName() == "O")
                {
                    gridArray[i][j]->breeding(gridArray, ROWS, COLS, gridArray[i][j]->getLived());
                }
            }
        }
        

        //print grid
        printGrid(gridArray, ROWS, COLS);
     
        
        system("clear");
    }
    
    
    
    
    for( int i = 0 ; i < ROWS ; i++ )
    {
        
        delete[] gridArray[i];
    }
   
    delete[] gridArray;
    
    
    
    cout << "That's all, thanks for playing!'" <<endl <<endl;
    choices();
     
}

/*************************************************************
 **Function:         	printGrid
 **Description:     	displays the grid
 **Parameters:    		array, int, int
 **Pre-Conditions:      N/A
 **Post-Conditions:     N/A
**Returns:				N/A
 *************************************************************/
void Grid::printGrid(Critter ***, int x, int y)
{
    for(int i = 0; i < ROWS; i++)
    {
        for(int j = 0; j < COLS; j++)
        {
            if(gridArray[i][j] == NULL)
            {
                cout << "*" ;
            }
            else
            {
                cout << gridArray[i][j]->getName();
            }
        }
        cout <<endl;
    }
    cout <<endl;
}
