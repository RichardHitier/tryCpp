#include <iostream>
#include <string>
#include <sstream>

using namespace std;

struct my_t { 
    string title;
    int year;
};

void show_t( my_t type){
    cout<<"Titre: "<<type.title<<endl;
    cout<<"Année: "<<type.year<<endl;
}

int main(void){

    string mystr;
    my_t mine, your;
    mine.title="On ne meurt que 2 fois";
    mine.year=1984;
    cout << "Votre titre: ";
    getline(cin, your.title);
    cout << "Votre année: ";
    getline(cin, mystr);
    stringstream(mystr)>>your.year;
    show_t(mine);
    show_t(your);

}
