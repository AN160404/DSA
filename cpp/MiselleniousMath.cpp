#include <iostream>
#include <math.h>
#include <vector>
using namespace std;

int main()
{
    int num = 153;
    int n = num;
    int digit = 0;
    while(n>0)
    {
        digit++;
        n=n/10;
    }
    int sum=0;
    int n1=num;
    while(n1>0){
        int rem=n1%10;
        sum+=round(pow(rem,digit));
        n1/=10;
    }
    if(sum==num){
        cout<<"Armstrong"<<endl;
    }
    else{
        cout<<"Not Armstrong"<<endl;
    }
    
    return 0;
}