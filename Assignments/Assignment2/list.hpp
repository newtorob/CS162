/*********************************************************************
** Program Filename: list.hpp
** Author: Robert Newton
** Date: 10/23/2016
** Description: Assignment 2- includes all header files for the list class,
declares the variables and functions
*********************************************************************/
#ifndef LIST_HPP
#define LIST_HPP
#include "item.hpp"
#include <vector>

using std::vector;


class List {
private:
    vector<Item> shoppingList;

public:
    List();
    void addItem();
    void deleteItem();
    void printList();
};


#endif 