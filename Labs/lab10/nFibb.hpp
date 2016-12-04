#ifndef NFIBB_HPP
#define NFIBB_HPP

class NFibb {

    public:
        NFibb(const unsigned long long &n);
        virtual ~NFibb();
        void fiboPrint;


    private:
        NFibb();
        unsigned long long Fibonacci(const unsigned long long &n);
        const unsigned long long* n_;

};

#endif