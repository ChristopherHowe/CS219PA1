#ifndef OPERATORS_H
#define OPERATORS_H

#include "addOp.cpp"

#define NUM_OPERATORS 1

class Operators{
    int numOperators;
    Operator* operators[NUM_OPERATORS];
    public:
    Operators(){
        Add add;
        operators[0]= &add;
        numOperators = NUM_OPERATORS;
    }

    Operator** getOperators(){
        return operators;
    }
    int getNumOperators(){
        return numOperators;
    }

};
#endif