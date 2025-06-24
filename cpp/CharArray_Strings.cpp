#include <iostream>
#include <string.h>

using namespace std;
int main(){

    char str[]="Hello";
    int n=strlen(str);
    int i=0,j=n-1;
    while(i<j){
        swap(str[i],str[j]);
        i++;
        j--;
    }
    cout<<str<<endl;

    return 0;
}