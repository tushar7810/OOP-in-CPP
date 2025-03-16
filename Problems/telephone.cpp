#include<iostream>
using namespace std;

class Telephone{
    private: 
        int prv ; // stores the previous meter reading
        int pre ; // stores the present meter reading
        int call ; // stores the number of calls made
        string name; // stores the customer
        double amt; // stores the calculated bill amount 
        double total; // Stores the total amount to be paid, including monthly rent

    public: 
        // Stores the previous reading, present reading, and consumer's name
        void input(){
            cout << "Enter consumer's name : ";
            cin >> name;
            cout<< "Previous calls : ";
            cin >> prv;
            cout<< "Present calls : ";
            cin >> pre;
        }

        // Calculates the bill based on the following charging criteria:
        void cal(){
            double fixedMonthlyRate = 180;
            call = pre + prv;
            if(call <= 100) amt = 0;
            else if(call > 100 and this -> call <= 200 ) amt = 0.90 * ( this -> prv + this -> pre) + fixedMonthlyRate;
            else if(call > 201 and this -> call <= 400 ) amt = 0.80 * ( this -> prv + this -> pre) + fixedMonthlyRate;
            else amt = 0.70 * ( this -> prv + this -> pre) + fixedMonthlyRate;
        }

        // Displays the consumer's name, total calls made, and total amount to be paid
        void diaplay(){
            cout << "====================" <<  endl;
            cout << "Consumer's name : " << this -> name << endl;
            cout<< "Total calls : "<< this -> call << endl;
            cout << "Total amount : " << this -> amt << endl;
        }

};

int main(){
    Telephone t1;
    t1.input();
    t1.cal();
    t1.diaplay();
    return 0;
}