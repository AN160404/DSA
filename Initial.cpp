#include <iostream>
using namespace std;

int main()
{
    cout<<"Pattern like:\n AAA\n BBB\n CCC (while loop)";
    int n=3,row=1;
    cout<<"\n Output \n";
    while (row <=n)
    {
        int col=1;
        while (col<=n)
        {
            char ch='A'+row-1;
            cout<<ch;
            col++;
        }
        cout<<endl;

        row++;
    }   

    
        
}
    
