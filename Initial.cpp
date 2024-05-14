#include <iostream>
using namespace std;

int main()
{
    cout<<"Pattern like:\n*** \n**\n*(while loop)";
    int n=3,row=1;
    cout<<"\n Output \n";
    while (row <=n)
    {
        int space=n-row+1;
        while (space)
        {
            cout<<"*";
            space--;
        }
        int col=1;
        while (col<=row)
        {
            cout<<" ";
            col++;
        }
    row++;
    cout<<endl;
    }
}
