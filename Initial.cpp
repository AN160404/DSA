#include <iostream>
using namespace std;

int main()
{
    cout<<"Pattern like:\n A\n BC\n DEF (while loop)";
    int n=3,row=1;
    cout<<"\n Output \n";
    char ch='A';

    while (row <=n)
    {
        int col=1;
        while (col<=row)
        {
            cout<<ch;
            ch=ch+1;
            col++;
        }
        cout<<endl;
        row++;
    }   

    
        
}
    
