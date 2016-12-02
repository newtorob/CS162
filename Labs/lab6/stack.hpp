/*********************************************************************
 ** Program Filename: Stack.hpp
 ** Author: Jason Goldfine-Middleton
 ** Date: 10/29/15
 ** Description: Contains the definition of the Stack class and its
 **              helper StackNode struct.  The Stack class provides
 **              a stack-like data structure for ints.
 *********************************************************************/

#ifndef STACK_HPP
#define STACK_HPP


class Stack
{
    private:
        struct StackNode
        {
            public:
                int item;
                StackNode *next;
        };

        StackNode *top;

    public:
        Stack();
        ~Stack();
        void push(const int item);
        int pop();
};

#endif