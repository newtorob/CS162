/*********************************************************************
** Program Filename: stack.hpp
** Author: Robert Newton
** Date: 11/20/2016
** Description: Assignment 4 - This is the interface for Stack, set
** up first in last out data struct
*********************************************************************/

#ifndef STACK_HPP
#define STACK_HPP
#include <iostream>
#include "creature.hpp"

class Stack
{

  private:
    struct StackNode { 
      //define node
    public:
      Creature* val;

      StackNode *next; 
        //poins to next node
      StackNode(Creature* creVal) { 

        val = creVal;

        next = 0;

      }
    };

    StackNode *top; 
    //points to the top of the stack
  public:

    Stack();
    ~Stack();

    void push(Creature* creVal); 
    //pushes value to top of stack
    Creature* pop();
    //pops value from top of stack

};

#endif