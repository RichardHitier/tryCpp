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

class Qux
{
    public:
        Qux() : _foo("Init String")
    {
        cout << "Qux's constructor"
            << " with _foo: "
            << _foo
            <<endl;
    }
    private:
        std::string _foo;
};

int main()
{
    Bar bar;
    Qux qux;
}
