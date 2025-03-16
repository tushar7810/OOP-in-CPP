#include<iostream>
#include<fstream>
#include<vector>
using namespace std;

int main (){

    int arr[5];
    cout<< "Enter the data : ";
    for(int i=0;i<5;i++){
        cin >> arr[i];
    }

    ofstream fout;
    fout.open("zoom.txt");
    for(int i=0;i<5;i++){
        fout << arr[i];
    }
    
    fout.close();
}

