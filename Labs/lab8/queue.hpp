/*********************************************************************
 ** Program Filename: queue.hpp
 ** Author: Robert Newton
 ** Date: 11/20/2016
 ** Description: Lab 8-- queue interface file for lab 8. This creates
 ** a first in first out data structure.
 *********************************************************************/

#ifndef QUEUE_HPP
#define QUEUE_HPP


class Queue
{
    private:
        struct QueueNode
        {
            public:
                int val;
                QueueNode *next;
                QueueNode *prev;
        };
        
       
        QueueNode *front;
        //first element in queue
        QueueNode *back;
        //last element in queue

        // indicates that a node is empty
        static const int EMPTY = -1;
        
    public:
        Queue();
        ~Queue();

        void addBack(int val);    
        //inserts new node with the val
        int getFront();            
        //front node
        int removeFront();         
                                    
        friend class Iteration;
};

#endif