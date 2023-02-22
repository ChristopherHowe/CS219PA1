#ifndef OPERATOR_H
#define OPERATOR_H

#include <iostream>
using namespace std;

class Operator{
    protected:
    string name;
    int numOperands;

    public:
    Operator();
    Operator(string, int);
    
    string getName();
    int getNumOperands();

    virtual uint32_t execute(uint32_t a = 0, uint32_t b = 0, uint32_t c = 0) = 0;
};

#endif