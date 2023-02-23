#ifndef OPERATORS_H
#define OPERATORS_H

#include "addOp.cpp"

#define NUM_OPERATORS 1


//includes all of the operators that are available in the program
//is used to iterate over all of the operators to find the correct command
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