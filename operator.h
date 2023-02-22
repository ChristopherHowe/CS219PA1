#ifndef OPERATOR_H
#define OPERATOR_H

#define MAX_OPERANDS 3

#include <iostream>
#include <bits/stdc++.h>
using namespace std;

struct Response{
    uint32_t value;
    bool overflow;

    Response(uint32_t v, bool o){
        value = v;
        overflow = o;
    }
};

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

    virtual Response execute(string[MAX_OPERANDS]) = 0;
};

#endif