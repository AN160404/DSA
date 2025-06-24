#include <iostream>
#include <string>

using namespace std;
int main(){

    string str="Hello";
    string str1;

    getline(cin,str1); // Inputting

    cout<<str+str1<<endl; // Concatenation
    cout<<(str==str1)<<endl; // Comparision
    cout<<(str>str1)<<endl; // Greater?
    cout<<str.length()<<endl; // Length

    // All loops can be run similarly to normal array.


    return 0;
}