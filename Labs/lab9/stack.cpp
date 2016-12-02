/*********************************************************************
** Program Filename: stack.cpp
** Author: Robert Newton
** Date: 11/28/2016
** Description: Assignment 4 - This implements the file for the stack
**class, reminder the stack is a first in last out data struct
*********************************************************************/

#include "stack.hpp"
#include <iostream>
#include <deque>
using std::endl;
using std::cout;
using std::cin;
using std::string;
using std::deque;

/*********************************************************************
** Function: push
** Parameters: char
**Description: adds item as iter and puts it at top of stack
*********************************************************************/

void Stack::push(char iter) 
{

  container.push_front(iter);

};

/*********************************************************************
** Function: pop
** Parameters: 
**Description: removes the item and returns top of stack
*********************************************************************/

char Stack::pop() 
{

  char item = container.front();

  container.pop_front();

  return item;

};

/*********************************************************************
** Function: empty
** Parameters: 
**Description: if the queue is empty return true, otherwise, return
** false if it's not empty
*********************************************************************/


bool Stack::empty() 
{

  return container.empty();

};

/*********************************************************************
** Function: size
** Parameters:
**Description: returns what is in the queue
*********************************************************************/

int Stack::size() 
{

  return container.size();

};

/*********************************************************************
** Function: top
** Parameters:
**Description: returns top of stack
*********************************************************************/


char Stack::top() 
{

  return container.front();

};