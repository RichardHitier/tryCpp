#include <iostream>
using namespace std;

class Foo
{
    public: 
        Foo(int x){ cout<<"Foo's constructor with x="<< x<<endl;}
};

class Bar : public Foo
{
    public:
    Bar():Foo(10)
    {
        cout <<"Bar's constructor"<<endl;
    }
};

int main()
{
    Bar bar;
}
