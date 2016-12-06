/*********************************************************************
** Program Filename: NFib.hpp
** Author: Robert Newton
** Date: 12/04/2016
** Description: Interface file for the NFib
class which is a  nonrecursive function & iteration
to calculate fibonacci numbers.

** Any and all examples taken and modified from the provided link:
https://www.codeproject.com/tips/109443/fibonacci-recursive-and-non-recursive-c
*********************************************************************/
#ifndef NFIBB_HPP
#define NFIBB_HPP

class NFibb {

    public:

        NFibb(const unsigned long long &t);

        virtual ~NFibb();

        void fiboPrint();


    private:

        NFibb();

        unsigned long long Fibo(const unsigned long long &t);

        const unsigned long long* t_;

};

#endif
