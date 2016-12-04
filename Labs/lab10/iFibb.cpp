#include <iostream>
#include "iFibb.hpp"

using std::cout;
using std::endl;

IFibb::IFibb()
{}

IFibb::IFibb(const unsigned long long &n):n_(&n)
{}

IFibb::~IFibb()
{}

unsigned long long IFibb::Fibonacci(const unsigned long long &n)
{
    if (n == 0)
        return 0;
    else if (n == 1)
        return 1;
    return Fibonacci(n-1) + Fibonacci(n-2);
}

void IFibb::fiboPrint()
{
    unsigned long long fiboNum = Fibonacci(*n_);
    cout << *n_ << "The Fibonacci number: " << fiboNum << endl;

}
