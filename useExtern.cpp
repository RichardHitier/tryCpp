#include <iostream>

#include "myExtern.h"

class UseExtern
{
    public:
        UseExtern(){
            std::cout << "Hey !! Building !!!"<<std::endl;
        }
        void doIt(){
            std::cout <<"Yes I Can "<<getMore(3,4)<<std::endl;
        }
};
        

int main( int argc, char **argv)
{
    UseExtern* useExtern = new UseExtern();
    useExtern->doIt();
}
