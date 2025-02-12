#include<iostream>
#include <string>

using namespace std;

class Student{

    private:
        string stream = "EEE";
        string studentName;   
        int semester;

    public: 

        Student(string name , int sem) : studentName(name) , semester(sem){};

        friend bool compareSemester(const Student &student1 , const Student &student2);

        void displayStdentDetails() const{
            cout << "Student name : " << studentName << endl;
            cout << "Stream : " << stream << endl;
            cout<< "Semester : " << semester << endl;
        }

        
};

bool compareSemester(const Student &student1 , const Student &student2){
    return student1.semester > student2.semester;
}

int main(){
    Student s1("Sagnik" , 5);
    // s1.displayStdentDetails();

    Student s2("Diganta" , 4);
    // s2.displayStdentDetails();

    if(compareSemester(s2,s1)){
        cout<< "True" << endl;
    }else{
        cout<< "False" << endl;
    }

    return 0;
}