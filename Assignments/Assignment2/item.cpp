/*********************************************************************
** Program Filename: item.cpp
** Author: Robert Newton
** Date: 10/23/2016
** Description: Assignment 2- includes all source code for the item class,
as well as the functions in the class.
*********************************************************************/


#include "item.hpp"

using std::string;

Item::Item() {
    buyQty = 0;
    unitPrice = 0;
}


/*********************************************************************
** Function: Item()
** Description:default constructor for list class
** 
*********************************************************************/
Item::Item(string newItemName, string newUnit, int newBuyQty, double newUnitPrice) {
    setItemName(newItemName);
    setUnit(newUnit);
    setBuyQty(newBuyQty);
    setUnitPrice(newUnitPrice);
}
/*********************************************************************
** Function: ==operator()
** Description: overloads the == for comparing item names
** 
*********************************************************************/
bool operator==(Item a, Item b) {
    return a.getItemName() == b.getItemName();
}

/*********************************************************************
** Function: setItemName()
** Description:sets the item name
** 
*********************************************************************/
void Item::setItemName(string newItemName) {
    itemName = newItemName;
}
/*********************************************************************
** Function: getItemName()
** Description: gets the item name
** 
*********************************************************************/
string Item::getItemName() {
    return itemName;
}
/*********************************************************************
** Function: setUnit()
** Description: sets the unit type
** 
*********************************************************************/
void Item::setUnit(string newUnit) {
    unit = newUnit;
}
/*********************************************************************
** Function: getUnit()
** Description: gets the unit type
** 
*********************************************************************/
string Item::getUnit() {
    return unit;
}
/*********************************************************************
** Function: setBuyQty()
** Description: sets the quantity to buy
** 
*********************************************************************/
void Item::setBuyQty(int newBuyQty) {
    buyQty = newBuyQty;
}
/*********************************************************************
** Function: getBuyQty()
** Description: gets the quantity to buy
** 
*********************************************************************/
int Item::getBuyQty() {
    return buyQty;
}
/*********************************************************************
** Function: setUnitPrice()
** Description: sets the unit price
*********************************************************************/
void Item::setUnitPrice(double newUnitPrice) {
    unitPrice = newUnitPrice;
}
/*********************************************************************
** Function: getUnitPrice()
** Description: gets the unit price
** 
*********************************************************************/
double Item::getUnitPrice() {
    return unitPrice;
}

