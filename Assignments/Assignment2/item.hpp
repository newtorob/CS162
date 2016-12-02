/*********************************************************************
** Program Filename: item.hpp
** Author: Robert Newton
** Date: 10/23/2016
** Description: Assignment 2- includes all header files for the item class,
declares the variables and functions
*********************************************************************/

#ifndef ITEM_HPP
#define ITEM_HPP

#include <iostream>
#include <cstdio>
#include <string>

using std::string;

class Item {
private:
    string itemName;
    string unit;
    int buyQty;
    double unitPrice;

public:
    Item();
    Item(string, string, int, double);
    void setItemName(string);
    string getItemName();
    void setUnit(string);
    string getUnit();
    void setBuyQty(int);
    int getBuyQty();
    void setUnitPrice(double);
    double getUnitPrice();
    friend bool operator== (Item a, Item b);
};

#endif