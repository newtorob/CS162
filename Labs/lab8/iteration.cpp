/*********************************************************************
 ** Program Filename: iteration.cpp
 ** Author:         Robert Newton
 ** Date:           11/20/16
 ** Description:    Contains the implementation of the Iteration class.
 ** Input:          none
 ** Output:         the elements in queue
 *********************************************************************/

#include "iteration.hpp"
#include <iostream>
using std::cout;
using std::cin;
using std::endl;

/*********************************************************************
 ** Function: Iteration::printElements
 ** Description: Prints out the queue 
 ** Parameters: n/a
 ** Pre-Conditions: n/a
 ** Post-Conditions: queue is printed 
 *********************************************************************/

void Iteration::printElements() {
    cout << "Printing contents of queue: " <<endl;

    do
    {
        int presVal = presPos->val;
        if (presVal != Queue::EMPTY)
            cout << presPos->val << ' ';
        presPos = presPos->next;
    }
    while (presPos != startPos);
    cout << endl;
}