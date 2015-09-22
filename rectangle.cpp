#include <iostream>
using namespace std;

class Rectangle {
    int width, height;
    public:
    void setvalues(int, int);
    int area(){
        return width*height;
    }
};

void Rectangle::setvalues(int w, int h){
    width = w;
    height = h;
}

int main(void){
    Rectangle myrect;
    myrect.setvalues(2,3);
    cout << "The area is: "<<myrect.area()<<endl;
    return 0;
}
