#include "operator.h"

Operator::Operator() : name("default name"), numOperands(0){};
Operator::Operator(string newName, int newNum) : name(newName), numOperands(newNum){};

Operator::getName(){
    return name;
}

Operator::getNumOperands(){
    return numOperands;
}
