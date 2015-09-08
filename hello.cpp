#include <iostream>
using namespace std;

void showtypes();
void askstr();

main(){
    int x, y;
    askstr();
    return 0;
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
