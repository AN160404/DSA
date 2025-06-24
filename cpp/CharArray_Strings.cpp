#include <iostream>
#include <string.h>

using namespace std;
int main(){

    char str[100];

    // Inputting value

    // cin.getline(str,len,delimiter)
    cin.getline(str,100,'.'); //Stops taking in word when . sign is entered

    cout<<str<<endl;

    return 0;
}