/*********************************************************************
** Program Filename: nFibb.cpp
** Author: Robert Newton
** Date: 12/04/2016
** Description: Implementation file for the NFib
class which is a nonrecursive function & uses iteration
to calculate fibonacci numbers.

** Any and all examples taken and modified from the provided link:
https://www.codeproject.com/tips/109443/fibonacci-recursive-and-non-recursive-c
*********************************************************************/

#include "nFibb.hpp"
#include <iostream>

using std::endl;
using std::cout;

/*********************************************************************
** Function: NFibb
** Parameters:
**Description: constructor
*********************************************************************/
NFibb::NFibb()
{}

/*********************************************************************
** Function: ~NFibb
** Parameters:
**Description: destructor
*********************************************************************/
NFibb::~NFibb()
{}

/*********************************************************************
** Function: NFibb
** Parameters:const unsigned long long
**Description: constructor
*********************************************************************/
NFibb::NFibb(const unsigned long long &t):t_(&t)
{}

/*********************************************************************
** Function: Fibo
** Parameters: const unsigned long long
**Description:  Implements the calculation of the fibonacci number
*********************************************************************/
unsigned long long NFibb::Fibo(const unsigned long long &t)
{
    unsigned long long first =0;

    unsigned long long second =1;

    unsigned long long counter =2;

    while(counter < t)
    {
        unsigned long long temp = second;

        second = first + second;

        first = temp;

        ++counter;
    }

    if(t==0)

        return 0;

    else

        return first + second;
}

/*********************************************************************
** Function: fiboPrint
** Parameters: 
**Description:  prints
*********************************************************************/
void NFibb::fiboPrint()
{
    const unsigned long long total = Fibo(*t_);

    cout << *t_ << " th fibo number is: " <<total << endl;
}
