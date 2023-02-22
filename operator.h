#ifndef OPERATOR_H
#define OPERATOR_H

#define MAX_OPERANDS 3

#include <iostream>
#include <bits/stdc++.h>
using namespace std;

class Operator{
    protected:
    string name;
    int numOperands;
    void stringToHex(string Operands[MAX_OPERANDS], uint32_t result[MAX_OPERANDS]);

    public:
    Operator();
    Operator(string, int);
    
    string getName();
    int getNumOperands();

    virtual uint32_t execute(string[MAX_OPERANDS]) = 0;
};

#endif