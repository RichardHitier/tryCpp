#include <iostream>
using namespace std;

class Rectangle {
    int width, height;
    public:
    Rectangle(int, int);
    void setvalues(int, int);
    int area(){ return (width*height) ;}
};

Rectangle::Rectangle(int w, int h){
    setvalues(w, h);
}

void Rectangle::setvalues(int w, int h){
    width = w;
    height = h;
}

int main(void){
    Rectangle myrect(2,3);
    cout << "The area is: "<<myrect.area()<<endl;
    return 0;
}
