/*********************************************************************
 * ** Program Filename: main.cpp
 * ** Author: Robert Newton
 * ** Date: 11/07/2016
 * ** Description: This is the main implementation file for assignment 3.
 * ** this program is paramount in setting up the creature the user selects
 * ** so we can use that information for the game
 * ** Input: user choice
 * ** Output: starts the game
 * *********************************************************************/

#include "barbarian.hpp"
#include "blueMen.hpp"
#include "vampire.hpp"
#include "medusa.hpp"
#include "harryPotter.hpp"
#include <iostream>
#include <cmath>


using std::cout;
using std::cin;
using std::endl;
using std::time;


/*********************************************************************
** Function: newCre
** Description: the newCre function prompts the user for a choice,
** then sends that response through a switch statement for the menu
** it returns a pointer to the user selected class
** Parameters: n/a
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
** Function: main
** Description: the main fucntion taes the character infromation from
** the user and sends the information through to the game, starting the game
** it then runs the infromation through and asks the user if they want to play
** again
** Parameters: n/a
** Pre-Conditions: must get user input
** Post-Conditions: n/a
** Return: 0
*********************************************************************/
int main() {

	  srand (time(NULL));
	  
	  bool stayLeave = true; //make sure the players are here

	  while (stayLeave) {
		  cout << "Hello, welcome to the game!" << endl;	 
		  cout << "Good Luck, Have Fun!"<<endl; //glhf -- overwatch edition
		  cout << "Select a Character for player 1!" << endl;
		  cout << endl;
		  Creature *player1 = newCre();
		  if (!player1) stayLeave = false;
		  
		  if (player1) { 
			  cout << "Select a Character for player 2!" << endl;

			  Creature *player2 = newCre();

			  cout << endl;

			  if (!player2) stayLeave = false;
			  
			  if (player2) {
				  
				  int flipCoin = rand() % 100 + 1;
				  
				  if (flipCoin > 50) {
					  
					  Creature *tempPtr = player1;

					  player1 = player2;

					  player2 = tempPtr;

				 }
				  
				  cout << "Player 1 (" << player1->type() << "), is first!" << endl;

			          bool player1alive = true;

				  	  bool player2alive = true;

				 while (player1alive && player2alive) {

					cout << "Player 1 (" << player1->type() << ") has attacked! Player 2 (" << player2->type() << ") is left with " << endl;

					player2alive = player2->defense(player1->attack());
					cout << endl;

					if (player2alive) {
						cout << "Player 2 (" << player2->type() << ") has attacked! Player 1 (" << player1->type() << ") is left with " << endl;

						player1alive = player1->defense(player2->attack());
						
						cout << endl;

					}
				 
				 
				 }

				 if (player1alive) {
					 cout << "Congrats! Player 1 (" << player1->type() << ") is victorious!" << endl;
						           
				 } else {
					 cout << "Congrats! Player 2 (" << player2->type() << ") is victorious!" << endl;
						           
				 }

				 cout << endl;
				 cout << endl;


				 
				 
				 delete player2;

			  
			  
			  
			  }

			        delete player1;	    


	    }

		    
}

  return 0;
  
}

/**************************TEST DRIVER*********************/
/*
int main() {

   srand (time(NULL));

   int player1wins = 0;
   int player2wins = 0;

   for (int i = 0; i < 100; i++) {

     Creature *player1 = new;
     Creature *player2 = new; 

     bool player1alive = true;

     bool player2alive = true;

     while (player1alive && player2alive) {

       cout << "Player 1 (" << player1->type() << ") has attacked! Player 2 (" << player2->type() << ") is left with ";
       player2alive = player2->defend(player1->attack());

	   cout << endl;

       if (player2alive) {
         cout << "Player 2 (" << player2->type() << ") has attacked! Player 1 (" << player1->type() << ") is left with ";
         player1alive = player1->defend(player2->attack());

		 cout << endl;
       }

     }

     if (player1alive) {
       player1wins++;
       cout << "Player 1 (" << player1->type() << ") has won!" << endl;
     } else {
       player2wins++;
       cout << "Player 2 (" << player2->type() << ") has won!" << endl;
     }

     delete player1;
     delete player2;



   }

   cout << "Player 1 won " << player1wins << " won this many games." << endl;
   cout << "Player 2 won " << player2wins << " won this many games." << endl;
   return 0;

};


*/