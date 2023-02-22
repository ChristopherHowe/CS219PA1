#ifndef OPERATORS_H
#define OPERATORS_H

#include "addOp.cpp"

#define NUM_OPERATORS 1

class Operators{
    int numOperators;
    Operator* operators[NUM_OPERATORS];
    public:
    Operators(){
        operators[0] = new Add;
        numOperators = NUM_OPERATORS;
    }
    ~Operators(){
        for(int i = 0; i < NUM_OPERATORS; i++){
            delete operators[i];
        }
    }

    Operator** getOperators(){
        return operators;
    }
    int getNumOperators(){
        return numOperators;
    }

};
#endif