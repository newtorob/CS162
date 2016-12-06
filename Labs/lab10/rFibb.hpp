/*********************************************************************
** Program Filename: RFib.hpp
** Author: Robert Newton
** Date: 12/04/2016
** Description: Interface file for the RFib
class which is a  recursive function & iteration
to calculate fibonacci numbers.

** Any and all examples taken and modified from the provided link:
https://www.codeproject.com/tips/109443/fibonacci-recursive-and-non-recursive-c
*********************************************************************/

#ifndef RFibb_HPP
#define RFibb_HPP

class RFibb

{

private:

    RFibb();

    unsigned long long Fibo(const unsigned long long &t);

    const unsigned long long *t_;

public:

    RFibb(const unsigned long long &t);

    virtual ~RFibb();

    void fiboPrint();

};

#endif
