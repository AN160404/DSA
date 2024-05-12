#include <iostream>
using namespace std;

int main()
{
    cout<<"Pattern like:\n 1\n 23\n 345 (while loop) without extra variable";
    int n=3,row=1;
    cout<<"\n Output \n";
    while (row <=n)
    {
        int col=row;
        while (col<2*row)
        {
            cout<<col;
            col++;
        }
        cout<<endl;

        row++;
    }   

    
        
}
    
