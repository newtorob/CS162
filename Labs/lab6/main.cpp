/*********************************************************************
 ** Program Filename: main.cpp
 ** Author: Jason Goldfine-Middleton
 ** Date: 10/29/15
 ** Description: This program runs some simple tests on the Stack and
 **              Queue classes and prints the results.
 ** Input: none
 ** Output: std::cout, results of operations on Stack and Queue objects
 *********************************************************************/

#include <iostream>

#include "stack.hpp"
#include "queue.hpp"

int main()
{
    int arr[] = { 0, 1, 2, 3, 4 };

    cout << "Testing the Stack class...\n\n";
    Stack s;

    cout << "pushing 0 to stack.\n";
    s.push(arr[0]);

    cout << "Removing 0 from stack: " << s.pop() << '\n';
    cout << "Trying to pop item from empty stack: " <<
                 s.pop() << '\n';
    cout << "Trying to pop item from empty stack again: " <<
                 s.pop() << '\n';

    
    cout << "pushing 0 to stack.\n";
    s.push(arr[0]);
    cout << "pushing 1 to stack.\n";
    s.push(arr[1]);
    cout << "pushing 2 to stack.\n";
    s.push(arr[2]);
    cout << "pushing 3 to stack.\n";
    s.push(arr[3]);
    cout << "pushing 4 to stack.\n";
    s.push(arr[4]);

    cout << "Removing 4 from stack: " << s.pop() << '\n';
    cout << "pushing 0 to stack.\n";
    s.push(arr[0]);
    cout << "Removing 0 from stack: " << s.pop() << '\n';
    cout << "Removing 3 from stack: " << s.pop() << '\n';
    cout << "Removing 2 from stack: " << s.pop() << '\n';
    cout << "Removing 1 from stack: " << s.pop() << '\n';
    cout << "Removing 0 from stack: " << s.pop() << '\n';
    cout << "Trying to pop item from empty stack: " <<
                 s.pop() << '\n';

    cout << "Testing the Queue class...\n\n";
    Queue q;

    cout << "pushing 0 to queue.\n";
    q.push(arr[0]);

    cout << "Removing 0 from queue: " << q.pop() << '\n';
    cout << "Trying to pop item from empty queue: " <<
                 q.pop() << '\n';
    cout << "Trying to pop item from empty queue again: " <<
                 q.pop() << '\n';

    
    cout << "pushing 0 to queue.\n";
    q.push(arr[0]);
    cout << "pushing 1 to queue.\n";
    q.push(arr[1]);
    cout << "pushing 2 to queue.\n";
    q.push(arr[2]);
    cout << "pushing 3 to queue.\n";
    q.push(arr[3]);
    cout << "pushing 4 to queue.\n";
    q.push(arr[4]);

    cout << "Removing 0 from queue: " << q.pop() << '\n';
    cout << "pushing 0 to queue.\n";
    q.push(arr[0]);
    cout << "Removing 1 from queue: " << q.pop() << '\n';
    cout << "Removing 2 from queue: " << q.pop() << '\n';
    cout << "Removing 3 from queue: " << q.pop() << '\n';
    cout << "Removing 4 from queue: " << q.pop() << '\n';
    cout << "Removing 0 from queue: " << q.pop() << '\n';
    cout << "Trying to pop item from empty queue: " <<
                 q.pop() << "\n\n";

    return 0;
}