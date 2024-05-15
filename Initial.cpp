#include <iostream>
using namespace std;

int main() {
    cout << "Pattern like:\n   1\n  121\n 12321\n1234321 (while loop)";
    int n = 4, row = 1;
    cout << "\nOutput\n";
    while (row <= n) {
        int space = n-row;  // Start with 1 space in each row
        while (space>0) { // Loop for spaces
            cout << " ";
            space--;
        }
        int col=1;
        while (col<=row)
        {
            cout<<col;
            col++;
        }
        int col1=1;
        while (col1<row)
        {
            cout<<row-col1;
            col1++;
        }
        
        row++;
        cout << endl;
    }
    return 0;
}

