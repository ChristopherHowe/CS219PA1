#ifndef OPERATOR_H
#define OPERATOR_H

#define MAX_OPERANDS 3

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

    virtual uint32_t execute(string[MAX_OPERANDS]) = 0;
};

#endif