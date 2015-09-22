#include <iostream>
using namespace std;

class Rectangle {

    int width, height;
    int myindex;
    public:
    static int index;
    Rectangle();
    Rectangle(int, int);
    void init();
    void setvalues(int, int);
    void showarea(){ cout << "The "<<myindex<< "th area is: "<<area()<<endl;}
    int area(){ return (width*height) ;}

};

int Rectangle::index=0;

void Rectangle::init(){
    myindex=index++;
}

Rectangle::Rectangle(){
    this->init();
    setvalues(5,5);
}

Rectangle::Rectangle(int w, int h){
    this->init();
    setvalues(w, h);
}

void Rectangle::setvalues(int w, int h){
    width = w;
    height = h;
}

int main(void){
    Rectangle myrect(2,3);
    Rectangle otherrect;
    myrect.showarea();
    otherrect.showarea();
    return 0;
}
