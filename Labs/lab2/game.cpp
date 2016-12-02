/*********************************************************************
 **Robert Newton
 **10/16/2016
 **Dice War
 **This program is designed to pit two players against eachother in
 a heated duel in a game called war. The player with the higher score
 obviously is the winner, however instead of collecting card like in 
 traditional war each player is scored.
 *********************************************************************/

#include "game.h"
#include "dice.h"
#include "loadedDice.h"
#include <iostream>

using std::cout;
using std::cin;
using std::endl;

//default constructor, creates 2 die with N number of sides
//determined by Player 1 and Player 2
Game::Game()
{
    cout<<"How many sides are on your die Player 1? " <<endl;
    cin>>s1;
    cout<<"How many sides are on your die Player 2? " <<endl;
    cin>>s2;
    
    p1.setSides(s1);
    p2.setSides(s2);
}

void Game::setup()
{
    cout<<"Player 1 is using a die with "<<s1<<" sides "<<endl;
    cout<<"Player 2 is using a die with "<<s2<<" sides "<<endl;
    cout<<"How many rounds do you wish to play?"<<endl;
    cin>>maxRound;
    
   
    cout<<"Player 1, do you have a loaded die? Y/N" <<endl;
   
    cin>>choice1;
    
    
    if((choice1 == 'y') || (choice1 == 'Y'))
    {
        cout<<"Player 1 has chosen to use a loaded die."<<endl;
    }
    else{
        cout<<"Player 1 has chosen to use a normal die."<<endl;
    }

    //ask if player 1/player 2 are using loaded die
    
    cout<<"Player 2, do you have a loaded die? Y/N" <<endl;
    
    cin>>choice2;

    if((choice2 == 'y') || (choice2 == 'Y'))
    {
        cout<<"Player 2 has chosen to use a loaded die."<<endl;  
    }
    else{
        cout<<"Player 2 has chosen to use a normal die."<<endl;
    }

}
//function displays score of both players by round
void Game::printGame()
{
    if (numRounds <= maxRound)
    {
        cout<<"Player 1 scored "<<p1Score<<" points!"<<endl;
        cout<<"Player 2 scored "<<p2Score<<" points!"<<endl;
    }
    if (numRounds >= maxRound)
    {
        if(p1Score > p2Score)
        {
            cout<<"Player 1 has won!"<<endl;
            cout<<endl;
            cout<<"The final score: "<<p1Score<< " to "<<p2Score<<endl;
        }
        else if(p1Score < p2Score)
        {
            cout<<"Player 2 has won!"<<endl;
            cout<<endl;
            cout<<"The final score: "<<p1Score<< " to "<<p2Score<<endl;
        }
        else{
            cout<<"Player1 and Player2 had a draw."<<endl;
            cout<<endl;
            cout<<"The final score: "<<p1Score<< " to "<<p2Score<<endl;
        }
    }
}

//function for the game, based on roll and assigns a point
//to the highest roll of the round
void Game::play()
{
    
    
    int roll1, roll2;
    p1Score = 0, p2Score = 0, numRounds = 0;
    while (numRounds< maxRound)
    {
        
        cout<<"Time to play! Current Round is " <<numRounds+1<< endl;
        
        if((choice1 == 'y') || (choice1 == 'Y'))
        {
            roll1 = p1.loadedRoll();
        }
        else{
            roll1 = p1.roll();
        }
    
        if((choice2 == 'y') || (choice2 == 'Y'))
        {
            roll2 = p2.loadedRoll();
        }
        else{
            roll2 = p2.roll();
        }
    
        cout<<"Player 1, your roll was: " << roll1 <<endl;
        cout<<"Player 2, your roll was: " <<roll2<<endl;
        
        
        if (roll1>roll2){
            p1Score++;
        }
    
        
        else if(roll2>roll1){
            p2Score++;
        }
        
    
        else
        {
            cout<<"Player 1 and Player 2 tied"<<std::endl;
        }
     
        numRounds++;
        cout<<endl;
        printGame();
        cout<<endl;
    }
}