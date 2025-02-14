#include <iostream>
#include<exception>
using namespace std;

/* // custom exception code snippets
class Exception{
    protected: 
        string msg;
    public :
        Exception(string msg){
            this -> msg = msg;
        }

        string what(){
            return msg;
        }
};
*/

int main(){
    int a, b, c;
    cout << "Enter a and b : ";
    cin >> a >> b;

    try{
        c = a/b;
        cout << c << endl;
    }
    catch (const runtime_error &e)
    {
        cout << "Exception occured : " << e.what() << endl;
    }
    return 0;
}