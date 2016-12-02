/*********************************************************************
** Program Filename: queue.hpp
** Author: Robert Newton
** Date: 11/20/2016
** Description: Assignment 4 - This is the interface for queue, set
** up first in first out data struct
*********************************************************************/

#ifndef QUEUE_HPP
#define QUEUE_HPP

#include "creature.hpp"
#include <iostream>
using std::endl;
using std::cout;
using std::cin;
using std::string;


class Queue
{

  private:
    struct QueueNode { 

    public:
      Creature *val;

      QueueNode *prev; 
        //points to previous node 
      QueueNode *next; 
        //points to next node

      QueueNode(Creature *creVal) {
        val = creVal;

        prev = 0;

        next = 0;
      }
    };

    QueueNode *front; 
    //points to front of queue
    QueueNode *back; 
    //points to back of queue

  public:

    Queue();
    ~Queue();

    void push(Creature *creVal);
    //pushes value to back of queue

    Creature *pop(); 
    //pops value from front of queue

};

#endif