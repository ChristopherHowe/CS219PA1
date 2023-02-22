#include "operators.h"

int main(){

    Operators operators;
    uint32_t test = 0x00A;
    cout << operators.getOperators()[0]->execute(test,test);
    return 0;
}