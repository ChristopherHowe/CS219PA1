#ifndef ADD_H
#define ADD_H

#include "operator.h"
#include <limits.h>
class Add : public Operator{
    public:
    Add(){
        name = "ADD";
        numOperands = 2;
    }

    Response execute(string operands[MAX_OPERANDS]){
        uint32_t ops[MAX_OPERANDS];
        stringToHex(operands, ops);
        bool overflow = false;
        if (ops[0] > 0 && ops[1] > UINT32_MAX - ops[0]){
            overflow = true;
        }
        return Response(ops[0] + ops[1], overflow);
    }
};

#endif