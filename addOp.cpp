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
        uint32_t ops[MAX_OPERANDS];
        stringToHex(operands, ops);
        return ops[0] + ops[1];
    }
};

#endif