/*********************************************************************
** Program Filename: main.cpp
** Author: Robert Newton
** Date: 12/04/2016
** Description: lab 10 - The main file for lab 10, runs recursive
**and non recursive, prints to the user
*********************************************************************/
#include "rFibb.hpp"
#include "nFibb.hpp"

#include <iostream>
#include <cstdlib>
#include <ctime>
#include <fstream>

using std::endl;
using std::cout;
using std::cin;
using std::ofstream;


int main() {


  int t = 1;

  while (t < 94) {
    //time vars
    clock_t timeOne, timeTwo;

    cout << "Currently finding the: " << t << "th fibo number!" << endl;

    //recursive only if 50 and lower
    if (t < 51) {

      ofstream ofs;

      ofs.open("recur.txt", std::ios::app);
      //write results to txt file

      cout << "Fibonacci(recursive) implementation" << endl;

      RFibb rFib(t);

      timeOne = clock();

      rFib.fiboPrint();

      timeOne = clock() - timeOne;

      cout  << timeOne << " clicks will be implemented (" << timeOne/CLOCKS_PER_SEC << " second)" << endl;

      ofs << timeOne << endl;

      ofs.close();

    }

    ofstream ofs;

    ofs.open("nRecur.txt", std::ios::app);
    //write results to txt file

    cout << "Calling Non-Recursive Fibonacci implementation" << endl;

    NFibb nFib(t);

    timeTwo = clock();

    nFib.fiboPrint();

    timeTwo = clock() - timeTwo;

    cout << "Time to execute: " << timeTwo << " clicks (" << timeTwo/CLOCKS_PER_SEC << " seconds)" << endl;

    ofs << timeTwo << endl;

    ofs.close();

    t += 1;

  }

  cout << "Game has eneded!" << endl;

  return 0;

}
