#include <iostream>
#include <vector>
using namespace std;

class Student{

    private:
        string stream = "ECE";

    public: // this is called access modifier

        // data members (attribute)

        string studentName;    // name of the stuednt
        int semester;      // name of the stream
        vector<string> subjects;  // list of subjects in the sem

        // Member function

        void displayStdentDetails(){
            cout << "Student name : " << studentName << endl;
            cout << "Stream : " << stream << endl;
            cout<< "Semester : " << semester << endl;
            cout << "Subjects : ";
            for (string t : subjects)
            {
                cout << t << " ";
            }
            cout << endl;
        }

};

int main(){
    Student s1 , s2; // s1 is the object

    // first object
    s1.studentName = "Tushar Sil";
    s1.semester = 5;
    s1.subjects = {"EM Waves," , "Digital Signal Processing," , "Nano Electronics," , "Digital Communication"};
    
    // second object
    s2.studentName = "Saptashri Nandi";
    s2.semester = 3;
    s2.subjects = {"Digital System Design," , "Data Structure," , "Signal System," , "Network Theory"};
    
    s1.displayStdentDetails(); // display first object

    s2.displayStdentDetails(); // display second object 

    return 0;
}