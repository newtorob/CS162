/*********************************************************************
** Program Filename: rFibb.cpp
** Author: Robert Newton
** Date: 12/04/2016
** Description: Implementation file for the rFib
class which is a recursive function & uses iteration
to calculate fibonacci numbers.

** Any and all examples taken and modified from the provided link:
https://www.codeproject.com/tips/109443/fibonacci-recursive-and-non-recursive-c
*********************************************************************/

#include <iostream>
#include "rFibb.hpp"

using std::cout;
using std::endl;


/*********************************************************************
** Function: RFibb
** Parameters:
**Description: constructor
*********************************************************************/
RFibb::RFibb()
{}

/*********************************************************************
** Function: ~RFibb
** Parameters:
**Description: destructor
*********************************************************************/

RFibb::~RFibb()
{}

/*********************************************************************
** Function: RFibb
** Parameters: const unsigned long long
**Description:constructor
*********************************************************************/
RFibb::RFibb(const unsigned long long &t):t_(&t)
{}

/*********************************************************************
** Function: Fibo
** Parameters: const unsigned long long
**Description: Implements the calculation of the fibonacci number
*********************************************************************/
unsigned long long RFibb::Fibo(const unsigned long long &t)
{
    if (t == 0)

        return 0;

    else if (t == 1)

        return 1;

    return Fibo(t-1) + Fibo(t-2);
}

/*********************************************************************
** Function: fiboPrint
** Parameters:
**Description: prints the fibonacci number
*********************************************************************/
void RFibb::fiboPrint()
{
    unsigned long long fiboNum = Fibo(*t_);

    cout << *t_ << "th Fibonacci number is: " << fiboNum << endl;

}
