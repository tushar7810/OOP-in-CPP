#include<iostream>
#include<vector>
using namespace std;

class Chai{
    public:
        string* teaName;
        int servings;
        vector<string> ingredients;

        // Default constructor
        Chai(){
            *teaName = "UnKnown Tea";
            servings = 1;
            ingredients = {"Water" , "Tea leaves"};
        }

        // parameterized constructor
        Chai(string teaName,int servings, vector<string> ingredients){
            this -> teaName = new string(teaName);
            this -> servings =servings;
            this -> ingredients = ingredients;
        }

        // copy constructor
        Chai(const Chai &otherChai){
            teaName = new string(*otherChai.teaName);
            servings = otherChai.servings;
            ingredients = otherChai.ingredients;
            cout<< "custom copy constructor " << endl;
        }

        // Method for display all the values
        void displayDetails(){
            cout<< "Tea name : " << *teaName << endl;
            cout<< "Servings : " << servings << endl;
            cout<< "Ingredients : " ;
            for(auto it: ingredients){
                cout<< it << " ";
            }
            cout << endl;
        }

        // destructor
        ~Chai(){
            delete(teaName);
            cout<< "Destructor Called" << endl;
        }
};

int main() {
    Chai c1("Lemon Tea" , 5, {"Water" , "Tea leaves"});
    // c1.displayDetails();

    // copy the oject 
    Chai c2 = c1;
    // c2.displayDetails();

    cout<< "Print c1 : "<< endl;
    *c1.teaName = ("Modify the teaName");
    c1.displayDetails();
    cout << "Print c2 : " << endl;
    c2.displayDetails();

    return 0;
}