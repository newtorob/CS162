/*********************************************************************
** Program Filename: Grocery Shopping List
** Author: Robert
** Date: 10/24/2016
** Description: Assignment 2- This is our main file for our shopping cart
** program, will run the proram
*********************************************************************/

#include <iostream>
#include <string>
#include "list.hpp"

using std::cout;
using std::cin;
using std::endl;
using std::string;

int main() {
    
    bool endList = false;           
    string userChoice;
    List userList;                  //sets the user list
    
    cout << "Welcome to your shopping list, please choose a selection below to get started!" << endl;
    //menu and instructions
    do {
     
        cout << "Please select what you would like to do" << endl;
        cout << "1. Add item to list" << endl;
        cout << "2. Delete item from list" << endl;
        cout << "3. Display list" << endl;
        cout << "4. Exit list" << endl;
        cin >> userChoice;
        cout <<endl;
        //add items
        if (userChoice == "1") {
            userList.addItem();
        }
        //delete the item
        else if (userChoice == "2") {
            userList.deleteItem();
        }
        //print your list
        else if (userChoice == "3") {
            userList.printList();
        }
        //end the program
        else if (userChoice == "4") {
            endList = true;
        }
        //anything else will kill the menu
        else {
            cout << "Invalid selection, please try again." << endl;
        }

        
    } while (!endList);

    return 0;
}