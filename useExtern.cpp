#include <iostream>

class UseExtern
{
    public:
        UseExtern(){
            std::cout << "Hey !! Building !!!"<<std::endl;
        }
        void doIt(){
            std::cout <<"Yes I Can"<<std::endl;
        }
};
        

int main( int argc, char **argv)
{
    UseExtern* useExtern = new UseExtern();
    useExtern->doIt();
}
