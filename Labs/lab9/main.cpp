/*********************************************************************
** Program Filename: main.cpp
** Author: Robert Newton
** Date: 11/28/2016
** Description: Lab9 - This is the main file for our program that 
** tests the buffer and returns a palindrome of a users word
*********************************************************************/
#include <iostream>
#include <stack>
#include <queue>
#include <ctime>
#include "stack.hpp"
#include "queue.hpp"
using std::cout;
using std::cin;
using std::endl;

/*********************************************************************
** Function: main
** Parameters:
**Description: main implementation of our program that tests the buffer
and returns a palindrome of a users word
*********************************************************************/
int main () {

  srand (std::time(NULL));

  int chanceAdd;
  int chanceRemoved;
  int numRounds;
  int avgTotal = 0;
  int obj;
  int choice;
  string usrWord;

  bool stop = false;

  if (!stop) {

    Queue buff;
    Stack pal;

    
    cout << "1. Press 1 to test the Palindrome" << endl;

    cout << "2. Press 2 to test the buffer" << endl;

    cout << "If you want to exit the program, hit 0" << endl;

    cin >> choice;
  
    if (choice == 1) 
    {

      cout << "Enter your word & I'll return' it's Palindrome : ";

      cin >> usrWord;


        for (int i = 0; i < usrWord.size(); i++) 
        {
          
          pal.push(usrWord.at(i));
        
        }

        cout << "The palindrome of your word is:  ";

        while (!pal.empty())
       
        {
          
          cout << pal.pop();
        
        }

    }
    
    else if (choice == 2) 
    
    {

        cout << "Enter the chance of an Object being put into the queue:" << endl;

        cin >> chanceAdd;

        cout << "and enter the chance of an Object being removed:" << endl;

        cin >> chanceRemoved;

        cout << "Ok. How many Rounds should we run?" << endl;

        cin >> numRounds;  

        if (numRounds < 1) 
        {

          cout << "Please enter more than 1 round" << endl;
       
        }
       

        for (int i = 0; i < numRounds; i++)
        {

          cout << "Round " << i + 1 << ":" << endl;

          obj = rand() % 100 + 1;

          if (obj <= chanceAdd) 
          {
            buff.push(obj);
            
            cout << "obj has now been added." << endl;

          }

          obj = rand() % 100 + 1;

          if (obj <= chanceRemoved && !buff.empty()) 
          {
            
            buff.pop();
            
            cout << "Object has now been removed." << endl;
          
          }

          cout << "Buffer size: " << buff.size() << endl;
          
          avgTotal += buff.size();
         
          cout << "The average size for all Rounds is: " << avgTotal / (i + 1) << endl;

        }

        cout << "The final buffer size is: " << buff.size() << endl;

        


    }

    else if (choice == 0) 
    {
      
      cout << "Thanks for playing" << endl;
      
      stop = true;

    }
  }
     
  return 0;

};