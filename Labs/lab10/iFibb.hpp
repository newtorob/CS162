#ifndef IFIBB_HPP
#define IFIBB_HPP

class IFibb
{
private:

    IFibb();

    unsigned long long Fibonacci(const unsigned long long &t);

    const unsigned long long *t_;

public:

    IFibb(const unsigned long long &t);

    virtual ~IFibb();

    void fiboPrint();

};

#endif
