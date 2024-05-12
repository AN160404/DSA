#include <iostream>
using namespace std;

int main()
{
    cout<<"Pattern like:\n 1\n 23\n 456 (while loop)";
    int n=3,row=1;
    cout<<"\n Output \n";
    while (row <=n)
    {
        int col=1;
        int value=row;
        while (col<=row)
        {
            cout<<value;
            value++;
            col++;
        }
        cout<<endl;

        row++;
    }   

    
        
}
    
