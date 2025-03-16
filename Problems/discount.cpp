#include<iostream>
using namespace std;
#include<string>

class Discount{
    private:
        int cost;
        string name;
        double dc;
        double amt;
    public:
        void input(){
            cout<< "Name of the customer : ";
            cin >> this->name;
            cout << "Enter the cost of the article : ";
            cin >> this->cost;
        }

        void cal(){
            if(this -> cost < 5000) dc = 0;
            else if( this -> cost > 5001 && this -> cost < 10000) this -> dc = 0.1;
            else if( this -> cost > 10001 && this -> cost < 15000) this -> dc = 0.15;
            else this -> dc = 0.2;
        }

        void display(){
            cout<< "==================="<< endl;
            cout<< "Name of the customer : " << this -> name << endl;
            cout << "Discount : "<< this->cost*this->dc <<  endl;
            cout<< "Amount to be paid : " << this -> cost - (this->cost*this->dc) << endl;
        }
};

int main(){
    Discount d1,d2;
    d1.input();
    // d2.input();
    d1.cal();
    // d2.cal();
    d1.display();
    // d2.display();
}
