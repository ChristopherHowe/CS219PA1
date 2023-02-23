#include "operators.cpp"
#include "fstream"

#define MAX_COMMANDS 10


int getCommands(string fileName, string opNames[MAX_COMMANDS], string operands[MAX_COMMANDS][MAX_OPERANDS]);
Response resolve(string oporator, string operands[MAX_OPERANDS]);

int main(){
    Operators operators;
    string operatorNames[MAX_COMMANDS];
    string commandOperands[MAX_COMMANDS][MAX_OPERANDS];
    int linesRead = getCommands("input.txt", operatorNames, commandOperands);

    cout << "Commands Ready to execute: " << linesRead << endl;
    for(int i = 0; i < linesRead; i++){
        cout << operatorNames[i] << "       ";
        for(int x = 0; x < MAX_OPERANDS && commandOperands[i][x] != ""; x++){
            cout << commandOperands[i][x] << "      ";
        }
        Response res = resolve(operatorNames[i],commandOperands[i]);
        cout << ": " << hex <<  "0x" << res.value << endl;
        cout << "Overflow?: " << (res.overflow ? "yes" : "no") << endl;
    }
    return 0;
}



//gets all of the commands from the input text file
int getCommands(string fileName, string opNames[MAX_COMMANDS], string operands[MAX_COMMANDS][MAX_OPERANDS]){
    string line; 
    int linesRead = 0;
    ifstream commands(fileName);
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


//resolves each command, and determines is a command is valid or not.
Response resolve(string opName, string operands[MAX_OPERANDS]){
    Operators operators;
    for (int i=0; i<NUM_OPERATORS; i++){
        Operator* op = operators.getOperators()[i];
        //cout << "check: opName: " << opName << " op->getName(): " << op->getName() << endl; 
        if (opName == op->getName()){
            //check for if enough operators are provided
            for(int x = 0; x < op->getNumOperands(); x++){
                if(operands[x] == ""){
                    cout << "enough operators where not provided for operation: ";
                    cout << opName << endl;
                    return Response(-1,1);
                }
            }
            return op->execute(operands);
        }
    }
    cout << "invalid operation provided: " << opName << endl;
    return Response(-1,1);
}