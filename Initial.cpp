#include <iostream>
using namespace std;

int main()
{
    cout<<"Pattern like:\n *\n **\n *** (while loop)";
    int n=3,count=1;
    cout<<"\n Output \n";
    while (count <=n)
    {
        int a=1;
        while (a<=count)
        {
            cout<<"*";
            a++;
        }
        cout<<"\n";
        count++;

    }    
}