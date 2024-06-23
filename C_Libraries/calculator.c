#include <stdio.h>
//#include <math.h>
#include <stdlib.h>
//#include "dmas.h"

int main(int argc, char* argv[]){
    int x = atoi(argv[1]);
    int y = atoi(argv[2]);
    int add = x + y;
    int subt = x - y;
    int mult = x * y;
    int div = x / y;
    //double e = pow(x, y);
    printf("Add: %d\nSubtract: %d\nMultiply: %d\nDivide: %d\n", add, subt, mult, div);
    return 0;
}