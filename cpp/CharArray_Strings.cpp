#include <iostream>
#include <string>

using namespace std;
int main(){

    string str="Hello";
    
    int i=0,j=str.length()-1;
    while(i<j){
        int temp=str[i];
        str[i]=str[j];
        str[j]=temp;
        i++;
        j--;
    }
    cout<<str<<endl;

    return 0;
}