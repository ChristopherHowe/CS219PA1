#ifndef OPERATORS_H
#define OPERATORS_H

#include "addOp.cpp"

#define NUM_OPERATORS 1

Add add;

class Operators{
    int numOperators;
    Operator* operators[NUM_OPERATORS] = {
        &add, 
    };

    public:
    Operators(){
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