#include <iostream>
using namespace std;

int main()
{
    cout<<"Pattern like:\n *\n **\n ***";
    int n=3;
    cout<<"\n Output \n";
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j<=i; j++)
        {
            cout<<"*";
            
        }
        cout<<endl;
    }
    
}