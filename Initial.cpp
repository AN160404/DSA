#include <iostream>
using namespace std;

int main()
{
    cout<<"Pattern like:\n 1\n 22\n 333 (while loop)";
    int n=3,count=1;
    cout<<"\n Output \n";
    while (count <=n)
    {
        int a=1;
        while (a<=count)
        {
            cout<<count;
            a++;
        }
        cout<<"\n";
        count++;
    }   

    cout<<"\n For Loop \n";
    for (int i = 1; i <=n; i++)
    {
        for (int j = 1;j<=i; j++)
        {
            cout<<i;
        }
        cout<<"\n";
    }
        
}
    
