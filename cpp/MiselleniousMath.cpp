#include <iostream>
#include <math.h>
#include <vector>
using namespace std;

int main()
{
    int a=20,b=28;
    int gcd=1;
    for (int i = 1; i < min(a,b); i++)
    {
        if(a%i==0 && b%i==0){
            gcd=i;
        }
    }
    cout<<gcd<<endl;
    
    
    return 0;
}