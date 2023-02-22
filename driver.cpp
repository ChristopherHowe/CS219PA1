#include "addOp.h"

#define NUM_OPERATORS 15

int main(){
    Add add;
    Operator* operators[NUM_OPERATORS] = {&add};
    uint32_t test = 0x00A;
    cout << operators[0]->execute(test,test);
    return 0;
}