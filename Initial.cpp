#include <iostream>
using namespace std;

int main()
{
    cout<<"Pattern like:\n ABC\n DEF\n GHI (while loop)";
    int n=3,row=1;
    cout<<"\n Output \n";
    char ch='A';
    while (row <=n)
    {
        int col=1;
        while (col<=n)
        {
            cout<<ch;
            ch=ch+1;
            col++;
        }
        cout<<endl;
        row++;
    }   

    
        
}
    
