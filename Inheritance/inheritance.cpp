#include<iostream>
#include<string>
#include<vector>
using namespace std;

// base class
class Tea{
    protected: 
        string name;
        int price;
    public: 
        Tea(string n, int p){
            name = n;
            price = p;
        }
        void display(){
            cout << "Name: " << name << endl;
            cout << "Price: " << price << endl;
        }

        virtual void brew() const {
            cout << "Brewing tea : " << name <<endl;
        }

        virtual ~Tea(){
            cout << "Tea destructor called" << endl;
        }
};

// derived class
class GreenTea : public Tea{
    public: 
        GreenTea(string n, int p) : Tea(n, p){
            cout << "Green Tea constructor called" << endl;
        }
        void brew() const override{
            cout << "Brewing green tea : " << name <<endl;
        }
        ~GreenTea(){
            cout << "Green Tea destructor called" << endl;
        }
};

class BlackTea : public Tea{
    public: 
        BlackTea(string n, int p) : Tea(n, p){
            cout << "Black Tea constructor called" << endl;
        }
        void brew() const override{
            cout << "Brewing black tea : " << name <<endl;
        }
        ~BlackTea(){
            cout << "Black Tea destructor called" << endl;
        }
};

int main (){
    BlackTea bt("Black Tea", 10);
    bt.display();
    bt.brew();
    GreenTea gt("Green Tea", 15);
    gt.display();
    gt.brew();
    bt.~BlackTea();
    gt.~GreenTea();
    return 0;
}

/*
    output : 
    Black Tea constructor called
    Price: 10
    Name: Black Tea
    Green Tea constructor called
    Name: Green Tea
    Price: 15
    Brewing green tea : Green Tea
    Black Tea destructor called
    Tea destructor called
    Green Tea destructor called
    Tea destructor called
    Green Tea destructor called
    Tea destructor called
    Black Tea destructor called
    Tea destructor called
    Brewing black tea : Black Tea
*/