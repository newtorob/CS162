/*********************************************************************
 ** Program Filename: iteration.hpp
 ** Author: Robert Newton
 ** Date: 11/20/2016
 ** Description:    This file defines the Iteration class.  
 **                it's main job is to iterate through a Queue
 **                and print its elements.
 ** Input: N/A
 ** Output: N/A
 *********************************************************************/


#ifndef ITERATION_HPP
#define ITERATION_HPP

#include "queue.hpp"


class Iteration
{
    private:
        Queue::QueueNode *startPos;
        Queue::QueueNode *presPos;
    public:
        Iteration(Queue& que) : startPos(que.front), presPos(que.front) {  }

        // print the Queue
        void printElements();
};

#endif