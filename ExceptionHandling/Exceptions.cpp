/*
    An exception is an unexpected and unwanted event arises dudring runtime 

    The try Statement represents a block of code that may throw an 
    exception placed inside the try block. It's followed by one 
    or more catch blocks. If an exception occurs , try block throws that exception

    The catch Statement represents a block of code that is excuted when a perticular 
    exception is thrown from the try block. The code to handle the exception is written 
    inside the catch block
*/
#include <iostream>
#include<exception>         // to use the predefined exception class import the header file
using namespace std;

/*
Exception class behind the scene
class exception{
    protected: 
        string msg;
    public :
        exception(string msg){
            this -> msg = msg;
        }

        string what(){
            return msg;
        }
};
*/

// custom Exception Handler
class InvalidAmount : public runtime_error{
    public: 
        InvalidAmount(const string &msg): runtime_error(msg){};
};

// Default exception handler e.g. bad_alloc

class Customer{

    string name;
    int balance, accountNumber;

    public:
        Customer(string name, int balance, int accountNumber){
            this->name = name;
            this->balance = balance;
            this->accountNumber = accountNumber;
        }

        // deposit
        void deposit(int amount){
            if (amount <= 0)
            throw runtime_error("");
        }

        // withdraw
        void withdraw(int amount){
            if (amount > 0 && amount < balance){
                balance -= amount;
                cout << amount << " rs is debited successfully" << endl;
            }else if (amount < 0){
                throw InvalidAmount("Amount should be greater than 0");
            }else{
                throw InvalidAmount("Your balance is low");
            }
        }

        void displayCusomerDetails(){
            cout << "Name of the customer : " << name << endl;
            cout << "Balance present in account : " << balance << endl;
            cout << "Account number is : " << accountNumber << endl;
        }
};

int main(){
    Customer c1("Rohit", 5000, 100202);
    try{
        c1.deposit(100);
        c1.withdraw(6500);
        c1.displayCusomerDetails();
    }catch(const InvalidAmount &e){
        cout<< "Exception occured in : "<< e.what() << endl;
    }catch(const bad_alloc &e){  
        cout << "Exception occured in : "<< e.what() << endl;
    }catch(...){ // default catch block 
        cout<< "Some exception occured" << endl;
    }
    return 0;
}