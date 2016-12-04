#include "nFibb.hpp"
#include <iostream>

using std::endl;
using std::cout;

NFibb::NFibb() 
{}

NFibb::NFibb(const unsigned long long &n):n_(&n)
{}

NFibb::~NFibb()
{}

unsigned long long NFibb::Fibonacci(const unsigned long long &n)
{
    unsigned long long first =0;
    usigned long long second =1;
    unsigned long long counter =2;
    while(counter < n)
    {
        unsigned long long temp=second;
        second=first+second;
        first=temp;
        ++counter;
    }

    if(n==0)
        return 0;
    else
        return first+second;
}

void NFibb::fiboPrint()
{
    const unsigned long long result = Fibonacci(*n_);
    cout << *n_ << "The fibonacci number: " <<result << endl;
}