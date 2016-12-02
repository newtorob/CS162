/*********************************************************************
** Program Filename: stack.hpp
** Author: Robert Newton
** Date: 11/28/2016
** Description: lab 9 - This is the interface for stack, 
** we use deque, "which stands for double-ended queue" 
** "Double-ended queues are sequence containers with 
** dynamic sizes that can be expanded or contracted on both ends"
**  -http://www.cplusplus.com/reference/deque/deque/
*********************************************************************/


#ifndef STACK_HPP
#define STACK_HPP


#include <string>
#include <iostream>
#include <deque> //needed for deque

using std::endl;
using std::cout;
using std::cin;
using std::string;
using std::deque;


class Stack
{

  private:

    deque <char> container;

  public:

    void push(char); 

    char pop(); 

    bool empty();

    int size();

    char top();

};

#endif

