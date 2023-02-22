#include "operator.h"

Operator::Operator() : name("default name"), numOperands(0){};
Operator::Operator(string newName, int newNum) : name(newName), numOperands(newNum){};

string Operator::getName(){
    return name;
}

int Operator::getNumOperands(){
    return numOperands;
}
