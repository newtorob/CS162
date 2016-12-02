#include "Item.hpp"

#ifndef LIST_HPP
#define LIST_HPP

class List {

  private:
    Item *itemArr;
    int numItems; // variable to hold the number of items in the array
    int arrCapacity; // variable to hold the total current capacity of the array

  public:
    List();
    void addItems();
    void removeItems();
    void doubleCapacity();
    void print();
    ~List();

};

#endif