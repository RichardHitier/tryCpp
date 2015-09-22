#include <iostream>
using namespace std;

class Rectangle {
    int width, height;
    public:
    Rectangle();
    Rectangle(int, int);
    void setvalues(int, int);
    void showarea(){ cout << "The area is: "<<area()<<endl;}
    int area(){ return (width*height) ;}
};

Rectangle::Rectangle(){
    setvalues(5,5);
}
Rectangle::Rectangle(int w, int h){
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
