#include <iostream>
using namespace std;

int main()
{
    cout<<"Pattern like:\n C\n BC\n ABC (while loop)";
    int n=3,row=1;
    cout<<"\n Output \n";

    while (row <=n)
    {
        int col=1;
        char ch='A'+n-row;
        while (col<=row)
        {
            char value=ch;
            ch++;
            cout<<value;
            col++;
        }
        cout<<endl;
        row++;
    }   

    
        
}
    
