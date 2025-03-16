#include<iostream>
using namespace std;

class Interest{
    int p; // priciple amount
    int r ; // rate of interest
    int t; // time in years 
    double interest; // calculated interest
    double amt ; // total amount to be paid (p+interest)

    public: 
        // Stores the principal amount, time (in years). 
        void input(){
            cout << "Enter the principle amount : ";
            cin >> p;
            cout << "Enter the time in years : ";
            cin >> t;
        }

        // Calculates interest and total amount based on the following interest rates: 
        void cal(){
            if( t == 1) interest = 6.5;
            else if( t== 2) interest = 7.5;
            else if( t == 3) interest = 7.5;
            else interest = 9.5;

            // interest = t*r;
            amt = p + (p*t*interest) / 100 ;
        }

        // Displays the principal amount, interest, and total amount to be paid. 
        void display(){
            cout<< "Principle amount : " << p << endl;
            cout<< "Interest : "<< interest << endl;
            cout << "Total amount to be paid : " << amt << endl;
        }
};

int main(){
    Interest i;
    i.input();
    i.cal();
    i.display();
    return 0;
}