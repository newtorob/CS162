/*********************************************************************
** Program Filename: queue.hpp
** Author: Robert Newton
** Date: 11/28/2016
** Description: lab 9 - This is the interface for queue, 
** we use deque, "which stands for double-ended queue" 
** "Double-ended queues are sequence containers with 
** dynamic sizes that can be expanded or contracted on both ends"
**  -http://www.cplusplus.com/reference/deque/deque/
*********************************************************************/

#ifndef QUEUE_HPP
#define QUEUE_HPP

#include <deque> //needed for deque
#include <iostream>


using std::endl;
using std::cout;
using std::cin;
using std::string;
using std::deque;

class Queue
{

  private:

    deque <int> container; //sets the deque container.

  public:

    void push(int);

    int pop(); 

    int front();

    bool empty();

    int size();

};

#endif