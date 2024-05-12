#include <iostream>
using namespace std;

int main()
{
    cout<<"Pattern like:\n ABC\n BCD\n CDE (while loop)";
    int n=3,row=1;
    cout<<"\n Output \n";
    while (row <=n)
    {
        char ch='A';
        int col=1;
        while (col<=n)
        {
            char value=ch+col+row-2;
            cout<<value;
            col++;
        }
        cout<<endl;
        row++;
    }   

    
        
}
    
