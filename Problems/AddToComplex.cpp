#include<iostream>
using namespace std;

class Complex{
    double real,img;

    public: 
        Complex(){
            this -> real = 0;
            this -> img = 0;
        }
        Complex(double a){
            real = a;
            img = a;
        }
        Complex(double real, double img){
            this -> real = real;
            this -> img = img;
        }
        void display(){
            cout<< "The complex number is : " << real << " + (" << img << ")j"<<endl;
        }
        void add(Complex a){
            this -> real = a.real + real;
            this -> img = a.img + img;
        }
        Complex add(Complex a, Complex b){
            Complex c ;
            c.real = a.real + b. real;
            c.img = a.img + b.img;
            return c;
        }
};

int main(){
    Complex c1,c2(3),c3(4,5),c4;
    c1.display();
    c2.display();
    c3.display();
    c2.add(c3);
    c4 = c2.add(c2,c3);
    // c2.display();
    c4.display();
    return 0;
}