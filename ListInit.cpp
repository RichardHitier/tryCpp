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
        Qux(string _foo) : _foo(_foo){show();}
        Qux() : _foo("Init String"), _baz( "Another Stringinit")
    {
        this->show();
    }
        void show()
        {
        cout << "Qux's constructor"<<endl
            << " with _foo: "
            << this->_foo<<endl
            << " and _baz: "
            << this->_baz
            <<endl;
    }
    private:
        std::string _baz;
        std::string _foo;
};

int main()
{
    Bar bar;
    Qux qux;
    Qux qux1("foo in constructor");
}
