#ifndef IFIBB_HPP
#define IFIBB_HPP

class IFibb
{
private:
    IFibb();
    unsigned long long Fibonacci(const unsigned long long &n);
    const unsigned long long *n_;

public:
    IFibb(const unsigned long long &n);
    virtual ~IFibb();
    void fiboPrint();

};

#endif
