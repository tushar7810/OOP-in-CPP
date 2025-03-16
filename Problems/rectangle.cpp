#include<iostream>
using namespace std;

class Rectangle {
    double len; // length 
    double bdh; // breadth
    public:
        void input();
        void area();  
};

void Rectangle :: input() {
    cout<< "Enter the length and breadth of the rectangle : " ;
    cin >> len >> bdh ;
}

void Rectangle :: area(){
    cout << "The area of the rectangle is : " << this -> len * this -> bdh << endl;
}

int main(){

    Rectangle r1,r2;
    r1.input();
    r2.input();
    r1.area();
    r2.area();

    return 0;
}