#ifndef OPERATOR_H
#define OPERATOR_H

#include <iostream>
using namespace std;

class Operator{
    string name;
    int numOperands;

    public:
    Operator();
    Operator(string, int);
    
    string getName();
    int getNumOperands();

    virtual int execute(int, int, int) = 0;
};

#endif