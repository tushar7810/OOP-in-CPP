#include<iostream>
using namespace std;

class Rectangle{
    double length,breadth;
    public:
        friend void input(Rectangle &r);
        friend void area(Rectangle r);
};

void input(Rectangle &r){
    cout<< "Enter the breadth and length : ";
    cin >> r.breadth >> r.length;
}

void area(Rectangle r){
    cout << "The area of the rectangle is : "<< r.breadth * r.length;
}

int main(){
    Rectangle r1;
    input(r1);
    area(r1);
}