#include <iostream>
using namespace std;

int main()
{
    cout<<"Pattern like:\n 1 2 3\n 4 5 6\n7 8 9";
    int count=1,n=3;
    cout<<"\n Output \n";
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cout<<count;
            count++;
        }
        cout<<endl;
    }
    
}