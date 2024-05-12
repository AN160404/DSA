#include <iostream>
using namespace std;

int main()
{
    cout<<"Pattern like:\n A\n BC\n CDE (while loop)";
    int n=3,row=1;
    cout<<"\n Output \n";
    char ch='A';

    while (row <=n)
    {
        int col=1;
        while (col<=row)
        {
            char value=ch+row+col-2;
            cout<<value;
            col++;
        }
        cout<<endl;
        row++;
    }   

    
        
}
    
