#include <iostream>
#include <math.h>
#include <vector>
using namespace std;

int main()
{
    int x=20,y=28;
    int a=x,b=y;
    while(a>0 && b>0){
        if(a>b){
            a=a%b;
        }
        else{
            b=b%a;
        }
    }  
    int gcd=1;
    if(a==0){
        gcd=b;
    }
    else{
        gcd=a;
    }
    
    int lcm=(x*y)/gcd;
    cout<<lcm;
    return 0;
}