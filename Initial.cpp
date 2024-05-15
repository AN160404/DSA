#include <iostream>
using namespace std;

int main() {
    cout << "Pattern like:\n1234554321\n1234**4321\n123****321\n12******21\n1********1 (while loop)";
    int n = 5, row = 1;
    cout << "\nOutput\n";
    while (row <= n) {
        int col1=1;
        while (col1<=n-row+1)
        {
            cout<<col1;
            col1++;
        }
        int space1=0;
        while(space1<=row-2)
        {
            cout<<"*";
            space1++;
        }
        int space2=0;
        while (space2<=row-2)
        {
            cout<<"*";
            space2++;
        }
        int col2=n-row+1;
        while(col2>0)
        {
            cout<<col2;
            col2--;
        }     
        row++;
        cout << endl;
    }
    return 0;
}

