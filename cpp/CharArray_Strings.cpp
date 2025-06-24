#include <iostream>
#include <string.h>

using namespace std;
int main(){

    char str[]={'a','b','c','\0'}; // Ended with "/0"
    str[0]='z'; // Value can be changed
    cout<<str<<endl;
    cout<<strlen(str)<<endl;


    char str1[]="abc";
    // str1[]="a"; // Value can't be changed
    // str1[0]="z"; // Can't changed this way as well
    cout<<str1<<endl;
    cout<<str1[2]<<endl; // Can be traversed like this



    return 0;
}