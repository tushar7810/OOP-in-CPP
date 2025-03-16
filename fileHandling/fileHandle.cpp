#include<iostream>
#include<fstream>

using namespace std;

int main(){
    ofstream fout;

    // fout.open("zoom.txt");
    // fout << "Hare Krishna" ;
    // fout.close();

    ifstream fin;
    fin.open("zoom.txt");
    char c;
    // fin >> c; don't read any space in a given file
    c = fin.get(); // get() function read all the data as well as spaces
    while(!fin.eof()){
        cout << c;
        c = fin.get();
    }

    fin.close();
    return 0;
}