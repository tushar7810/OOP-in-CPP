#include<iostream>
#include<string>
using namespace std;

// Abstruct class is a class that has atleast one pure virtual function
class Tea{ 
    public: 
        virtual void prepareIngredients() = 0;
        virtual void brew() = 0;
        virtual void serve() = 0;

        void makeTea(){
            prepareIngredients();
            brew();
            serve();
        }
};

// Derived class
class Lemontea : public Tea {
    public: 
        void prepareIngredients() override {
            cout << "Lemon Tea: Preparing Ingredients" << endl;
        }

        void brew() override {
            cout << "Lemon Tea: Brewing" << endl;
        }

        void serve() override{
            cout << "Lemon Tea: Serving" << endl;
        }
};

class Coffee : public Tea {
    public: 
        void prepareIngredients() override {
            cout << "Coffee: Preparing Ingredients" << endl;
        }

        void brew() override{
            cout << "Coffee: Brewing" << endl;
        }

        void serve() override {
            cout << "Coffee: Serving" << endl;
        }
};

int main(){
    Lemontea lt ;
    Coffee c;
    lt.makeTea();
    c.makeTea();
    return 0;
}