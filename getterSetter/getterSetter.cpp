#include<iostream>
#include <vector>

using namespace std;

class Chai{
    string teaName;
    int servings;
    vector <string> ingredients;

    public: 
        Chai (){
            teaName = "Unknown tea";
            servings = 1;
            ingredients = {"Water", "Tea Leaves", "Milk", "Sugar"};
        }

        Chai(string name,int servings, vector<string> ingredients){
            teaName = name;
            this->servings = servings;
            this->ingredients = ingredients;
        }

        // getter
        string getTeaName(){
            return teaName;
        }

        // setter for teaName
        string setTeaName(string name){
            teaName = name;
        }

        int getServings(){
            return servings;
        }

        // setter for servings
        void setServings(int servings){
            this->servings = servings;
        }

};

int main(){
    Chai c1;
    c1.getTeaName();
    return 0;
}