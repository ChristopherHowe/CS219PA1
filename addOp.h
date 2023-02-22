#ifndef ADD_H
#define ADD_H

#include "operator.h"

class Add : public Operator{
    public:
    Add(){
        name = "ADD";
        numOperands = 2;
    }

    uint32_t execute(uint32_t a, uint32_t b, uint32_t c = 0){
        return a + b;
    }
};

#endif