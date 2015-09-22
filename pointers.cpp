#include <iostream>
using namespace std;

int * makearray(int n){
    int * foo = new int[n];
    return foo;
}

int main(void){
    int baz = 10;
    int* foo = makearray(baz);
    cout << foo<<": "<<*foo<<endl;
    return 0;
}
