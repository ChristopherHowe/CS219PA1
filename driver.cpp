#include "operators.h"
#include "fstream"
#include <bits/stdc++.h>

#define MAX_COMMANDS 10


int getCommands(string fileName, string opNames[MAX_COMMANDS], string operands[MAX_COMMANDS][MAX_OPERANDS]);
uint32_t resolve(string, string[MAX_OPERANDS]);
int main(){
    Operators operators;
    string operatorNames[MAX_COMMANDS];
    string commandOperands[MAX_COMMANDS][MAX_OPERANDS];
    cout << "before get Commands" << endl;
    int linesRead = getCommands("input.txt", operatorNames, commandOperands);

    cout << "lines Read: " << linesRead << endl;
    for(int i = 0; i < linesRead; i++){
        cout << "Operator: " << operatorNames[i];
        for(int x = 0; x < MAX_OPERANDS; x++){
            cout << " operand: " << commandOperands[i][x];
        }
        cout << endl << "result: " << resolve(operatorNames[i],); 
    }

    uint32_t test = 0x00A;
    cout << operators.getOperators()[0]->execute(test,test);
    return 0;
}


int getCommands(string fileName, string opNames[MAX_COMMANDS], string operands[MAX_COMMANDS][MAX_OPERANDS]){
    cout << "in get commands" << endl;
    string line; 
    int linesRead = 0;
    ifstream commands(fileName);
    cout << "after construction" << endl;
    if(commands.is_open()){

        while(getline(commands, line)){
            string operand;
            istringstream ss(line);

            ss >> opNames[linesRead];
            for(int i=0; ss >> operand; i++){
                operands[linesRead][i] = operand;
            }
            linesRead++;
        }
    }else{
        cout << "failed to open file" << endl;
    }
    return linesRead;
}

uint32_t resolve(string operator, string operands[MAX_OPERANDS]){
    Operators operators;
    for (int i=0; i<NUM_OPERATORS; i++){
        if (operator == operators.getOperators()[i]->getName()){
            op = operators.getOperators()[i];
            //check for if enough operators are provided
            for(int x = 0; x < op.getNumOperands(); x++){
                if(operands[x] == ""){
                    cout << "enough operators where not provided for operation: ";
                    cout << operator << endl;
                    return -1;
                }
            }

        }
    }
}