#include <iostream>
using namespace std;

int main()
{
    cout<<"Pattern like:\n 1\n 21\n 321 (while loop)";
    int n=3,row=1;
    cout<<"\n Output \n";
    while (row <=n)
    {
        int col=1;
        while (col<=row)
        {
            cout<<row-col+1;
            col++;
        }
        cout<<endl;

        row++;
    }   

    
        
}
    
