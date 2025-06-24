#include <iostream>
#include <string.h>

using namespace std;
int main(){

    string str="madam";
    string str1=str;
    int i=0,j=str.length()-1;
    while(i<j){
        swap(str[i],str[j]);
        i++;
        j--;
    }
    if(str==str1){
        cout<<"Palindrome"<<endl;
    }
    else{
        cout<<"Not Palindrome"<<endl;
    }

    return 0;
}