#include <iostream>
#include <string>
#include <sstream>
using namespace std;

// -
// functions declarations
//
void showtypes();
void askstr();
int askint();
void backwardloop(int);
void changeval(int&);


//
// Templates
//

template <class T>
T add(T a, T b){
    return a+b;
}
