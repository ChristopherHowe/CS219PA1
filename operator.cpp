#include "operator.h"

Operator::Operator() : name("default name"), numOperands(0){};
Operator::Operator(string newName, int newNum) : name(newName), numOperands(newNum){};

string Operator::getName(){
    return name;
}

int Operator::getNumOperands(){
    return numOperands;
}

void Operator::stringToHex(string operands[MAX_OPERANDS],uint32_t result[MAX_OPERANDS]){
    stringstream ss;
    for(int i = 0; i < MAX_OPERANDS; i++){
        ss << hex << operands[i];
        ss >> result[i];
    }
}