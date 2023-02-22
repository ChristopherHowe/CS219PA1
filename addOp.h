#ifndef ADD_H
#define ADD_H

#include "operator.h"

class Add : public Operator{
    public:
    Add(){
        name = "ADD";
        numOperands = 2;
    }

    uint32_t execute(string operands[MAX_OPERANDS]){
        return operands[0] + operands[1];
    }
};

#endif