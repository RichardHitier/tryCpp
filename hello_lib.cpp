#include <iostream>
#include <string>
#include <sstream>

using namespace std;

template <class T>
T add(T a, T b){
    return a+b;
}

void backwardloop( int n ){
    cout << "Doing it for n="<<n<<endl;
    while ( n > 0){
        cout << "n: "<<n<<endl;
        --n;
    }
}

void changeval(int& a){
    a*=3;
}

int askint(){
    int n;
    string s;
    cout << "type int: ";
    getline( cin, s);
    stringstream( s ) >> n;
    return n;
}

void askstr(){
    string mystr;
    cout << "what's you name: ";
    getline( cin, mystr);
    cout << "hello " << mystr << endl;
}

void showtypes(){
    cout << "Size of char : " << sizeof(char) << endl;
    cout << "Size of int : " << sizeof(int) << endl;
    cout << "Size of short int : " << sizeof(short int) << endl;
    cout << "Size of long int : " << sizeof(long int) << endl;
    cout << "Size of float : " << sizeof(float) << endl;
    cout << "Size of double : " << sizeof(double) << endl;
    cout << "Size of wchar_t : " << sizeof(wchar_t) << endl;
    cout << "hello world\n";
}
