/*********************************************************************
** Program Filename: queue.cpp
** Author: Robert Newton
** Date: 11/20/2016
** Description: Assignment 4 - This implements the file for the queue
**class, reminder the queue is a first in first out data struct
*********************************************************************/

#include "queue.hpp"
#include <iostream>
using std::endl;
using std::cout;
using std::cin;
using std::string;


/*********************************************************************
** Function: Queue
** 
**Description:Constructor for queue, sets front and back values
** to zero.
*********************************************************************/


Queue::Queue() {

  front = 0;

  back = 0;

};

/*********************************************************************
** Function: ~Queue
** 
**Description: This is the destructor for queue, deletes memory for 
** for each node when the queue is destroyed
*********************************************************************/

Queue::~Queue() {

  QueueNode *qPtr = front;

  while (qPtr) {
    QueueNode *trash = qPtr;

    qPtr = trash->prev;

    delete trash->val;

    delete trash;
  }

};

/*********************************************************************
** Function: push
** 
**Description: Takes creVal and adds it as the new node, sets that node
** as the new back node
*********************************************************************/

void Queue::push(Creature* creVal) {

  QueueNode *qPtr = back;

  back = new QueueNode(creVal);

  if (qPtr) {

    back->next = qPtr;

    qPtr->prev = back;

  } else {

    front = back;

  }

};

/*********************************************************************
** Function: pop
** 
**Description: Removes the front node from the stack and sets 
** the prev node as the new front
** Returns: Value of removed node
*********************************************************************/


Creature* Queue::pop() {

  Creature* res = 0;

  if (front) {

    QueueNode *qPtr = front;

    res = qPtr->val;

    front = qPtr->prev;

    if (front) {

      front->next = 0;

    } else {

      back = 0;

    }

    delete qPtr;


  }

  return res;

};
