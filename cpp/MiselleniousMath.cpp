#include <iostream>
#include <math.h>
#include <vector>
#include <climits>
using namespace std;

int main()
{
    int num=20801;
    int temp=num;
    int newnum=0;
    while(temp!=0){
        if(newnum<INT_MIN/10 || newnum>INT_MAX/10){
            return 0;
        }
        long rem=temp%10;
        newnum=newnum*10+rem;
        temp/=10;
    }
    cout<<newnum;
    return 0;
}