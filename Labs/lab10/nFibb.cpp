/*********************************************************************
** Program Filename: queue.cpp
** Author: Robert Newton
** Date: 11/28/2016
** Description: lab 9 - The implementation of queue for lab 9
*********************************************************************/

#include "nFibb.hpp"
#include <iostream>

using std::endl;
using std::cout;

NFibb::NFibb() 
{}

NFibb::NFibb(const unsigned long long &t):t_(&t)
{}

NFibb::~NFibb()
{}

unsigned long long NFibb::Fibonacci(const unsigned long long &t)
{
    unsigned long long one =0;

    unsigned long long two =1;

    unsigned long long count =2;

    while(count < t)
    {
        unsigned long long temp = two;

        two = one + two;

        one = temp;
        
        ++count;
    }

    if(t==0)

        return 0;

    else

        return one + two;
}

void NFibb::fiboPrint()
{
    const unsigned long long total = Fibonacci(*t_);

    cout << *t_ << " th fibo number is: " <<total << endl;
}