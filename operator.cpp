#include "operator.h"

//constructors
Operator::Operator() : name("default name"), numOperands(0){};
Operator::Operator(string newName, int newNum) : name(newName), numOperands(newNum){};


//getters
string Operator::getName(){
    return name;
}

int Operator::getNumOperands(){
    return numOperands;
}

//converts the read in strings to hexidecimal
void Operator::stringToHex(string operands[MAX_OPERANDS],uint32_t result[MAX_OPERANDS]){
    for(int i = 0; i < MAX_OPERANDS && operands[i] != ""; i++){
        unsigned int x;
        istringstream ss(operands[i]);
        ss >> hex >> x;
        result[i] = x;
    }
}