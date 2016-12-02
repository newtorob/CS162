/*********************************************************************
 * ** Program Filename: main.cpp
 * ** Author: Robert Newton
 * ** Date: 11/21/2016
 * ** Description: This is the main implementation file for assignment 4.
 * ** this program is paramount in setting up the creature the user selects
 * ** so we can use that information for the game

 * *********************************************************************/

#include "barbarian.hpp"
#include "blueMen.hpp"
#include "vampire.hpp"
#include "medusa.hpp"
#include "harryPotter.hpp"
#include "utility.hpp"
#include "stack.hpp"
#include "queue.hpp"
#include <iostream>
#include <cmath>

using std::endl;
using std::cout;
using std::cin;
using std::string;

/*********************************************************************
** Function: newCre
** Description: the newCre function prompts the user for a choice,
** then sends that response through a switch statement for the menu
** it returns a pointer to the user selected class
** Parameters: n/a
** Descriptio
** Pre-Conditions: must pull in all the different classes, as well as,
** must get info from the two users on their character choices.
** Post-Conditions: n/a
** Return: crePtr
*********************************************************************/

Creature *newCre()
{
	Creature *crePtr;
	int usrChoice; 

	  cout << "1 - Vampire" << endl;
	  cout << "2 - Barbarian" << endl;
	  cout << "3 - Blue Men" << endl;
	  cout << "4 - Medusa" << endl;
	  cout << "5 - Harry Potter" << endl;
	  cout << "If you have questions on the characters press 6!" << endl;
	  cout << "Otherwise press 0 to leave!" << endl;
	  
	  cin >> usrChoice;

	  switch (usrChoice) {
		  
		  
		  case 0:
		   crePtr = 0;
		   break;

		  case 1:
		   crePtr = new Vampire;
		   cout << "You chose: Vampire! Good Luck!" << endl;
		   break;
		   

		  case 2:
		   crePtr = new Barbarian;
		   cout << "You chose: Barbarian! Good Luck!" << endl;
		   break;
		  
		  case 3:
		   crePtr = new BlueMen;
		   cout << "You chose: Blue Men! Good Luck!" << endl;
		   break;
		  
		  case 4:
		   crePtr = new Medusa;
		   cout << "You chose: Medusa! Good Luck!"<< endl;
		   break;
		  
		  case 5:
		   crePtr = new HarryPotter;
		   cout << "You chose: Harry Potter! Good Luck!" << endl;
		   break;
		  
		  case 6:

		   cout << "Vampire: Suave, debonair, but vicious and surprisingly resilient!" << endl;
		   cout << "Barbarian: Think Conan or Hercules from the movies. Big sword, big muscles, bare torso." << endl;
		   cout << "Blue Men: They are small (6” tall), fast and tough. So they are hard to hit and can take some damage. As for the attack value,you can do a LOT of damage when you can crawl inside the armor or clothing of your opponent." << endl;
		   cout << "Medusa: Scrawny lady with snakes for hair. They help with fighting. Just don’t look at her!" << endl;
		   cout << "Why are you reading this? How can you not know who Harry Potter is?" << endl;

		   crePtr = newCre();
		   break;
	  }
	  
	  
	  return crePtr;

};


/*********************************************************************
**            TESTING!!!! 
**Function: creAuto
** 
**Description: This is a testing function, it will create a creature
** without any user input, if the number entered is 1-5 it returns a 
**pointer with the creature type, otherwise if it is 0, it will choose
** at random
*********************************************************************/


Creature *creAuto(int autoNum = 0) {

  Creature *crePtr;
  if (autoNum < 1 || autoNum > 5) {
    autoNum = rand() % 5 + 1;
  }

  switch (autoNum) {

     case 1:
		   crePtr = new Vampire;
		   cout << "You chose: Vampire! Good Luck!" << endl;
		   break;
		   

		  case 2:
		   crePtr = new Barbarian;
		   cout << "You chose: Barbarian! Good Luck!" << endl;
		   break;
		  
		  case 3:
		   crePtr = new BlueMen;
		   cout << "You chose: Blue Men! Good Luck!" << endl;
		   break;
		  
		  case 4:
		   crePtr = new Medusa;
		   cout << "You chose: Medusa! Good Luck!"<< endl;
		   break;
		  
		  case 5:
		   crePtr = new HarryPotter;
		   cout << "You chose: Harry Potter! Good Luck!" << endl;
		   break;

  }

  return crePtr;

};


/*********************************************************************
** Function: main
** 
**Description: This is the main function that takes the infor from the user
** and send that info through the game to start things up.
**Parameters: N/A
**Return: 0
*********************************************************************/



int main() {

  srand (time(NULL));

  bool continueGame = true;

  string n1, n2; 

  Queue t1, t2; 

  Stack usrLoss; 
  int creNum = 0;

  while (continueGame) {

    cout << "Hello! Welcome to the tournament version of Fantasy Fight Club" << endl;

    cout << "Here is a quick overview of the game. " << endl;

    cout << "You will have 2 teams of characters, and will fight until there are no more characters" << endl;

    cout << "How many characters would you like on each team?" << endl;

    cin >> creNum;

    cout << "We will go ahead and make 2 teams with " << creNum << " characters." << endl;


    Creature *player1;

    Creature *player2;



    
    cout << "What is team one's name?!" << endl;

    cin >> n1;

    cout << "Awesome " << n1 << "now we can fill your team  with " << creNum << " characters" << endl;

    cout << "--------------------------" <<endl;

    for (int i = 1; i <= creNum; i++) {

      cout << "What type is character " << i << endl;

      player1 = newCre();
    }
      t1.push(player1);

      cout << player1->getType() << " has been welcomed to the team!" << endl;

      player1->setType("Team " + n1 + " [ " + player1->getType() + " ] ");

    

    
    cout << "What name does team 2 have?! " << endl;
    
    cin >> n2;
    
    cout << "Awesome " << n2 << "now we can fill your team with " << creNum << " characters" << endl;

    cout << "--------------------------" <<endl;
    
    for (int i = 1; i <= creNum; i++) {
    
      cout << "What type is character " << i << endl;
    
      player2 = newCre();
    
      t2.push(player2);
    
      cout << player2->getType() << " has been welcomed to team!" << endl;
   
      player2->setType("Team " + n2 + " [ " + player2->getType() + " ] ");
    
    }



    /*Test Driver
    
    
    n1 = "1";

    n2 = "2";
    
    for (int i = 1; i <= creNum; i++) {
    
      player1 = creAuto();
    
      t1.push(player1);
    
      player1->setType("Team " + n1 + " (" + player1->getType() + ")");
    
      player2 = creAuto();
    
      t2.push(player2);
    
      player2->setType("Team " + n2 + " (" + player2->getType() + ")");
    }
    *************************************************************************************************/

    cout << "Press any key to start the tournament!" << endl;
    
    system("read");

    int gameScore1 = 0;
    int gameScore2 = 0;

    cout << "Starting Tournament!! Good Luck!" << endl;

    cout << "--------------------------" <<endl;

    bool doneGame = false;

    while (!doneGame) {


      player1 = t1.pop();

      player2 = t2.pop();


      // check if  pop operations made fighers
      if (player1 && player2) { 

        
        cout<< player1->getType() << " versus " << player2->getType() << ": " <<endl;

        cout << "BEGIN!!" << endl;

        bool player1alive = true;

        bool player2alive = true;

        while (player1alive && player2alive) { 

          //fight until one dies
          player2alive = player2->defense(player1->attack());

          if (player2alive) {

            player1alive = player1->defense(player2->attack());

          }

        }

        int restore;
        //holding restored points

        if (player1alive) {

          cout << player1->getType() << " is the winner!!";

          if ( (restore = player1->creRestore()) ) {

            //restore strength
            cout << " (Strength +" << restore << ")"; 

          }
          cout << endl;

          t1.push(player1);

          gameScore1++;

          usrLoss.push(player2);

        } else {

          cout << player2->getType() << " wins!";

          if ( (restore = player2->creRestore()) ) {

            cout << " (strength +" << restore << ")"; 
         
          }
          cout << endl;
          cout << endl;

          t2.push(player2);

          gameScore2++;

          usrLoss.push(player1);

        }

        cout << "Here is an update: Team " << n1 << ": " << gameScore1 << "& Team " << n2 << ": " << gameScore2 << " " << endl;

      } else if (player2 == 0) {

       
        doneGame = true;
        //team 1 is winner
        cout << "Winners: " << endl;
       
        cout << n1 << " Wins " << endl;
      
        if (player1) delete player1;

     } else if (player1 == 0) {

        
        doneGame = true;
        //team2 is winner
        cout << "Winners: " << endl;
        
        cout << n2 << " Wins "<< endl;

        if (player2) delete player2;

      }

    }

    cout << "--------------------------" <<endl;

    cout << "Game Ending scores: " << endl;

    cout  << n1 << " scored: " << gameScore1 << endl;

    cout <<  n2 << " score: " << gameScore2 << endl;
   
    cout << "--------------------------" <<endl;

 
    cout << "Here is the losers of the game! " << endl;
    

   
//shows user the losers of the game
      
   while (player1 = usrLoss.pop()) {

        cout << player1->getType() << endl;

        delete player1;

      };

      

    //give user option to start again

    char y,Y;
    char n,N;

    cout << "Would you like to begin again??" << endl;
    cout << "Answer with Y or y to start again or use N or n to stop. " << endl;
    if (y && Y) {

      continueGame = true;

    }

    else {

      continueGame = false;

    }

  }
      return 0;

};





