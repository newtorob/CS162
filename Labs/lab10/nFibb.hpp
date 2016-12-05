#ifndef NFIBB_HPP
#define NFIBB_HPP

class NFibb {

    public:

        NFibb(const unsigned long long &t);

        virtual ~NFibb();

        void fiboPrint();


    private:
    
        NFibb();

        unsigned long long Fibonacci(const unsigned long long &t);

        const unsigned long long* t_;

};

#endif