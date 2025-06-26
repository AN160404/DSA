#include <iostream>
#include <math.h>
#include <vector>
using namespace std;

// Euclid's Algorithm
int main()
{
    int a=20,b=28;
    int gcd=1;
    while(a>0 && b>0){
        if(a>b){
            a=a%b;
        }
        else{
            b=b%a;
        }
    }  

    if(a==0){
        cout<<b<<endl;
    }
    else{
        cout<<a<<endl;
    }
    
    
    return 0;
}