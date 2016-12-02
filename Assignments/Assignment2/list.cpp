/*********************************************************************
** Program Filename: list.cpp
** Author: Robert Newton
** Date: 10/23/2016
** Description: Assignment 2- includes all source code for the list class,
as well as the functions in the class.
*********************************************************************/

#include "list.hpp"
#include <iostream>
#include <string>

using std::cout;
using std::cin;
using std::endl;
using std::string;

/*********************************************************************
** Function: List()
** Description:default constructor for list class
** 
*********************************************************************/
List::List(){
    
};

/*********************************************************************
** Function: addItem()
** Description: function for adding items to the list, checks for duplicate
** items and sets the units and prices of new items
*********************************************************************/
void List::addItem() {
    string newItemName;
    string newUnit;
    int newBuyQty;
    double newUnitPrice;
    int duplicateItem = 0;
    string update;
    int len = shoppingList.size();
    bool duplicate = false;
    
    //promt the user for a new item
    cout << "What's the name of the item you would like to add? " <<endl;
    cin >> newItemName;
    cout << "What type of unit measure is the item? ";
    cin >> newUnit;
    cout << "How many " << newItemName << "('s) are you buying? ";
    cin >> newBuyQty;
    cout << "How much is one " << newItemName << "? ";
    cin >> newUnitPrice;
    
    //set the new item with info from user
    Item newItem(newItemName, newUnit, newBuyQty, newUnitPrice);
    
    //check for existing item
    for (int i = 0; i < len; i++) {
        if (shoppingList[i] == newItem) {       
            duplicate = true;                   
            duplicateItem = i;               
        }
    }
    
    //if found, ask user to update it if they want
    if (duplicate == true) {
        cout << "This item is on your list, did you want to update it?" << endl;
        cout << "Press 1 to update the item, otherwise, press any other button to exit: ";
        cin >> update;                     
    }
    
    //not found, add to list
    else {
        shoppingList.push_back(newItem);
    }
    
    //if updated, ask for new value
    if (update == "1") {
        cout << "The quanity of " << shoppingList[duplicateItem].getItemName() << " is " << shoppingList[duplicateItem].getBuyQty() << endl;
        cout << "Please update it with the new quanity. "<<endl;
        cin >> newBuyQty;
        shoppingList[duplicateItem].setBuyQty(newBuyQty);
        cout << "The quantity of " << shoppingList[duplicateItem].getItemName() << "has been updated to " << shoppingList[duplicateItem].getBuyQty() <<endl;
    }
}

/*********************************************************************
** Function: deleteItem()
** Description:function for deleting the item, whichever item user chooses
** 
*********************************************************************/
void List::deleteItem() {
    int len = shoppingList.size();                
    int numDelete = -1;
    string itemDelete;
    cout << "Which item would you like to delete? " << endl;
    cin >> itemDelete;                                       
    
    for (int i = 0; i < len; i++) {
        if (itemDelete == shoppingList[i].getItemName()) {            
            numDelete = i;
        }
    }
    
    if (numDelete > -1) {
        shoppingList.erase (shoppingList.begin() + numDelete);  
    }
    
}
/*********************************************************************
** Function: printList()
** Description: prints the list of items and price from the user.
** 
*********************************************************************/
void List::printList() {
    int len = shoppingList.size();
    double totalPriceList;
    double totalPriceItem;
    cout << "Item Name, Unit, Quanity to buy, Single Price, Total Price" << endl;
    for (int i = 0; i < len; i++) {
        cout << i + 1 << ". ";
        cout << shoppingList[i].getItemName() << ", ";
        cout << shoppingList[i].getUnit() << ", ";
        cout << shoppingList[i].getBuyQty() << ", ";
        cout << shoppingList[i].getUnitPrice() << ", ";
       
        totalPriceItem = shoppingList[i].getBuyQty() * shoppingList[i].getUnitPrice();
        cout << totalPriceItem << endl;
        
        totalPriceList += totalPriceItem;
    }
    
    cout << "The total price of the shopping list is: $";
    cout <<  totalPriceList << endl;
    cout << endl;
   
}