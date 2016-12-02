/*********************************************************************
 ** Program Filename: main.cpp
 ** Author:           Robert Newton
 ** Date:             11/20/16
 ** Description:      This is the main method that allows the user
 **                   to input their options into the main menu and 
 **                   implements a testing driver 
 ** Input:            n/a
 ** Output:           results of the queue
 *********************************************************************/

#include <iostream>
#include <string>
#include "queue.hpp"
#include "iteration.hpp"
#include "utility.hpp"

using std::cout;
using std::cin;
using std::endl;


void test();

int main()
{
    int selection = -1;
    Queue que;

    while (true)
    {
        cout << "\nMAIN MENU\n"
                  << "Select an option:\n" 
                  << "1) Add int to queue\n" 
                  << "2) Remove int from queue\n"
                  << "3) Print the queue \n"
                  << "4) Run queue test \n"
                  << "5) Exit\n\n";

        selection = Utility::getValidRange(1, 5);

        switch (selection)
        {
            case 1:
            {
                cout << "Add an int to the queue 0 through 1000: " <<endl;
                int val = Utility::getValidRange(0, 1000);
                que.addBack(val);
                break;
            }
            case 2:
            {
                int val = que.removeFront();
                if (val == -1) 
                    cout << "Empty queue!\n";
                else
                    cout << "Removed " << val << " from queue.\n";
                break;
            }
            case 3:
            {
                Iteration qi(que);
                qi.printElements();
                break;
            }
            case 4:
            {
                test();
                break;
            }
            case 5:
            {
                return 0;
            }
        }

    }
}


/*********************************************************************
 ** Function: test()
 ** Description: Runs a series of automated tests on the Queue class.
 ** Parameters: none
 ** Pre-Conditions: none
 ** Post-Conditions: displays the results of each test
 *********************************************************************/

void test()
{
    int arr[] = { 0, 1, 2, 3, 4 };

    cout << "Testing the Queue!!" <<endl;
    {
        Queue que;

        cout << "Adding 0" <<endl;
        que.addBack(arr[0]);

        cout << "Current front " << que.getFront() << endl;

        cout << "Removing 0 " << que.removeFront() << endl;

        cout << "Queue status: " << que.getFront() << endl;

        cout << "Removing item from empty queue: " <<
                     que.removeFront() << endl;
        cout << "Removing item from empty queue: " <<
                     que.removeFront() << endl;

        
        cout << "Adding 0." <<endl;
        que.addBack(arr[0]);
        cout << "Adding 1." <<endl;
        que.addBack(arr[1]);
        cout << "Adding 2." <<endl;
        que.addBack(arr[2]);
        cout << "Adding 3." <<endl;
        que.addBack(arr[3]);
        cout << "Adding 4." <<endl;
        que.addBack(arr[4]);

        cout << "Removing 0  " << que.removeFront() << endl;
        cout << "Adding 0 ." <<endl;
        que.addBack(arr[0]);
        cout << "Removing 1" << que.removeFront() << endl;
        cout << "Removing 2" << que.removeFront() <<
                     '\n';
        cout << "Removing 3" << que.removeFront() << endl;

        cout << "Removing 4" << que.removeFront() << endl;

        cout << "Removing 0 from queue: " << que.removeFront() << endl;

        cout << "Removing item from empty queue: " << que.removeFront() << endl;

        que.addBack(arr[0]);
        que.addBack(arr[1]);
        que.addBack(arr[2]);
        que.addBack(arr[3]);
        que.addBack(arr[4]);
        cout << "Descructor" <<endl;
    }

    {
        Queue que;
        que.addBack(arr[0]);
        que.addBack(arr[1]);
        que.addBack(arr[2]);
        que.addBack(arr[3]);
        que.addBack(arr[4]);
        cout << "Destructor with 5 elements" <<endl;
    }

    {
        Queue que;
        que.addBack(arr[4]);
        cout << "Destructor with 1 Element" <<endl;
    }

    {
        Queue que;
        cout << "Destructor with no elements" <<endl;
    }

   
}

