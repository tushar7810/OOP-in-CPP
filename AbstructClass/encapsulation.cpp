#include<iostream>
using namespace std;

class BankAccount {
    private: 
        string accoutNumber;
        double balance;

    public:
        BankAccount(string accountNumber , double balance) : accoutNumber(accountNumber) , balance(balance){};
        
        // getter 
        double getBalance() const {
            return balance;
        }

        // Method to deposit money
        void deposit(double amount){
            if(amount > 0){
                balance += amount;
                cout<< "Your new balance is : " << balance << endl;
            }else{
                cout << "Amount should be greater than 0" << endl;
            }
        }

        // Method to withdraw money
        void withdraw(double amount){
            if(amount > 0 && amount <= balance){
                balance -= amount;
                cout<< "Your new balance is : " << balance << endl;
            }else{
                cout << "Amount should be greater than 0 and less than balance" << endl;
            }
        }

};

int main(){
    BankAccount a1("123456" , 1000);
    a1.deposit(500);
    a1.withdraw(2000);
    a1.getBalance();
    return 0;
}