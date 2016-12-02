/*********************************************************************
** Program Filename: queue.cpp
** Author: Robert Newton
** Date: 11/28/2016
** Description: lab 9 - The implementation of queue for lab 9
*********************************************************************/

#include "queue.hpp"
#include <iostream>
#include <ctime>
#include <cstdlib>
#include <deque>
using std::endl;
using std::cout;
using std::cin;
using std::string;
using std::deque;


/*********************************************************************
** Function: push
** Parameters: int
**Description: pushes number to the back
*********************************************************************/

void Queue::push(int num) 
{

  container.push_back(num);

};

/*********************************************************************
** Function: pop
** Parameters: 
**Description: removes object, then returns the front object
*********************************************************************/

int Queue::pop() 
{

  int obj = -1;

  if (!container.empty()) 
  {
    obj = container.front();

    container.pop_front();

  }

  return obj;

};

/*********************************************************************
** Function: front
** Parameters: 
**Description: returns the object at the front of our queue
*********************************************************************/


int Queue::front() 
{

  int obj = -1;

  if (!container.empty()) 
  {
  
    obj = container.front();
  
  }

  return obj;

};

/*********************************************************************
** Function: empty
** Parameters: 
**Description: if the queue is empty return true, otherwise, return
** false if it's not empty
*********************************************************************/


bool Queue::empty() 
{

  return container.empty();

};

/*********************************************************************
** Function: size
** Parameters:
**Description: returns what is in the queue
*********************************************************************/

int Queue::size() 
{

  return container.size();

};