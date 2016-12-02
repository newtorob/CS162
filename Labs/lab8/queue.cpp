/*********************************************************************
 ** Program Filename: queue.cpp
 ** Author: Robert Newton
 ** Date: 11/20/2016
 ** Description: Lab-8, the implemenetation file for the queue class,
 ** this implements all functions for the queue.
 *********************************************************************/

#include <cstdlib>  
#include <string>   
#include <iostream> 
#include "queue.hpp"
using std::cout;
using std::cin;
using std::endl;

/*********************************************************************
 ** Function: Queue
 ** Description: constructor for queue
 ** Parameters: N/A
 ** Pre-Conditions: N/A
 ** Post-Conditions: front/back point to the new element
 *********************************************************************/

Queue::Queue()
{  
    // create first node here
    QueueNode *logF = new QueueNode();
    logF->val = EMPTY;
    logF->next = logF;
    logF->prev = logF;

    front = logF;
    back = logF;
}


/*********************************************************************
 ** Function: ~Queue
 ** Description: destructor
 ** Parameters: N/A
 ** Pre-Conditions: front not deleted
 ** Post-Conditions: front & other nodes are deleted
 *********************************************************************/

Queue::~Queue()
{
    //first node
    QueueNode *pres;
    back = front->next;

    
    while (back != front)
    {
        pres = back;
        back = pres->next;

        delete pres;
    }

    delete back;    // delete the last node

}


/*********************************************************************
 ** Function:           addBack
 ** Description:        Adds a new element to back of Queue
 ** Parameters:         val    
 ** Pre-Conditions:     val is not base value of -1
 ** Post-Conditions:    Queue is not empty
 **                     back points to a node that contains "val",
 **                     node points to the old back node, 
                        node points to the node back pointed to, 
 *********************************************************************/

void Queue::addBack(int val)
{
    
    QueueNode *after = back->next;

    // if after is empty,it holds val's value
    if (after->val == EMPTY)
    {
        after->val = val;

        return;
    }

    // make a new node and insert it between back & after
    QueueNode *pres = new QueueNode;
    pres->val = val;
    pres->prev = back;
    pres->next = after;

    back->next = pres;
    after->prev = pres;
    back = pres;
}


/*********************************************************************
 ** Function:       getFront
 ** Description:    Sets out to store the front node of the Queue and returns 
 **                   a string stating the status of the Queue
 **                 
 ** Parameters:     N/A
 ** Pre-Conditions: -1 was never added to the Queue 
 ** Post-Conditions: if there is no front print empty status
 **                  otherwise returns the front node
 *********************************************************************/

int Queue::getFront()
{
    int out = front->val;

    if (out == EMPTY)
        cout << "Queue is empty. There is no front element: ";

    return out;
}


/*********************************************************************
 ** Function:       removeFront
 ** Description:    Returns the int stored in the front node of the
 **                 Queue and makes the old front node as empty.
 ** Parameters:     N/A
 ** Pre-Conditions: none
 ** Post-Conditions: if there is no front , then return -1
 **                  or return the int stored in the front node
 **                  old front is now empty
 *********************************************************************/

int Queue::removeFront()
{
    int num = front->val;

    // mark old front empty
    front->val = EMPTY;

    // move to next queue 
    front = front->next;

    return num;
}