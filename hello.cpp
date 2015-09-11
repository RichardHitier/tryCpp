#include "hello_lib.h"
using namespace std;

int main(void){
    int n = askint();
    changeval(n);
    backwardloop(n);
    return 0;
}
