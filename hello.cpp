#include "hello_lib.h"
using namespace std;

int main(void){
    int n = askint();
    int * table;
    //changeval(n);
    //backwardloop(n);
    table = filltable(n);
    showtable(table, n);
    //double res = add(10.0, 11.1);
    //cout <<  res << endl;
    return 0;
}
