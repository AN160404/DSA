#include <iostream>
using namespace std;

int main()
{
    cout<<"Algo for prime no \n";
    int n=1,count=0;
    for (int i = 1; i<=n; i++)
    {
        if(n%i==0)
        {
            count=count+1;
        }
    }
    if (count<=2 && count>0)
    {
        cout<<"Prime";
    }
    else
    {
        cout<<"Not Prime";
    }
    return 0;
}