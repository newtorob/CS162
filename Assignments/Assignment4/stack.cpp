/*********************************************************************
** Program Filename: stack.cpp
** Author: Robert Newton
** Date: 11/20/2016
** Description: Assignment 4 - This implements the file for the stack
**class, reminder the stack is a first in last out data struct
*********************************************************************/

#include "stack.hpp"
#include <iostream>
using std::endl;
using std::cout;
using std::cin;
using std::string;

/*********************************************************************
** Function: Stack
** 
**Description: This is the constructor for stack, sets top 
** to a value of 0
*********************************************************************/

Stack::Stack() {

  top = 0;

};

/*********************************************************************
** Function: ~Stack
** 
**Description: This is the destructor for stack, deletes memory for 
** for each node when the stack is destroyed
*********************************************************************/

Stack::~Stack() {

  StackNode *sPtr = top;

  while (sPtr) {

    StackNode *trash = sPtr;

    sPtr = trash->next;

    delete trash->val;

    delete trash;

  }

};

/*********************************************************************
** Function: push
** 
**Description: takes creVal and adds it as a new node, and sets it as
** the top node
*********************************************************************/


void Stack::push(Creature* creVal) {

  StackNode *sPtr = top;

  top = new StackNode(creVal);

  top->next = sPtr;

};

/*********************************************************************
** Function: pop
** 
**Description: This removes the top node from stack, and sets the next
node as the new top node
**
**Return: Removed node's value'
*********************************************************************/


Creature* Stack::pop() {

  Creature* res = 0;

  if (top) {

    StackNode *sPtr = top;

    res = sPtr->val;

    top = sPtr->next;

    delete sPtr;

  }

  return res;

};