#include <iostream>
#include "iFibb.hpp"

using std::cout;
using std::endl;

IFibb::IFibb()
{}

IFibb::IFibb(const unsigned long long &t):t_(&t)
{}

IFibb::~IFibb()
{}

unsigned long long IFibb::Fibonacci(const unsigned long long &t)
{
    if (t == 0)
    
        return 0;

    else if (t == 1)

        return 1;

    return Fibonacci(t-1) + Fibonacci(t-2);
}

void IFibb::fiboPrint()
{
    unsigned long long fiboNum = Fibonacci(*t_);

    cout << *n_ << "The Fibonacci number: " << fiboNum << endl;

}
