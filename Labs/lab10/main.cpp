/*********************************************************************
** Program Filename: main.cpp
** Author: Robert Newton
** Date: 12/05/2016
** Description: lab 10 - The main file for lab 10, runs recursive
**and non recursive, prints to the user
*********************************************************************/
#include "iFibb.hpp"
#include "nFibb.hpp"

#include <iostream>
#include <cstdlib>
#include <ctime>
#include <fstream>

using std::endl;
using std::cout;
using std::cin;

int main() {

 
  int t = 1;

  while (t < 94) { // only run until the 93rd fibonacci number because of storage capacity

    clock_t timeOne, timeTwo; // declare both time variables

    cout << "Currently finding the: " << t << "th fib number!" << endl;

    if (t < 51) { // only apply the recursive function to numbers 50 and below

      ofstream ofs;

      ofs.open("recur.txt", ios::app); // save time results in a text file

      cout << "Fibonacci(recursive) implementation" << endl;

      IFibb iFib(t);

      timeOne = clock(); // start time

      iFib.fiboPrint();

      timeOne = clock() - timeOne; // start - end time

      cout  << timeOne << " clicks will be executed (" << timeOne/CLOCKS_PER_SEC << " second)" << endl;

      ofs << timeOne << endl;

      ofs.close();

    }

    ofstream ofs;

    ofs.open("non_recursive.txt", ios::app); // save time results in a text file

    cout << "Calling Non-Recursive Fibonacci implementation" << endl;

    NFibb nFib(t);

    timeTwo = clock(); // start time

    nFib.fiboPrint();

    timeTwo = clock() - timeTwo; // start - end time

    cout << "Time to execute: " << timeTwo << " clicks (" << timeTwo/CLOCKS_PER_SEC << " seconds)" << endl;

    ofs << timeTwo << endl;

    ofs.close();

    t += 1;

  }

  cout << "Game has eneded!" << endl;

  return 0;

}