#include <iostream>
using namespace std;

int main() {
    cout << "Pattern like:\n1\n 23\n  456\n   78910 (while loop)";
    int n = 4, row = 1;
    cout << "\nOutput\n";
    int value=1;
    while (row <= n) {
        int space = n-row;  // Start with 1 space in each row
        while (space>0) { // Loop for spaces
            cout << " ";
            space--;
        }
        int col=1;
        while (col<=row)
        {
            cout<<value;
            value++;
            col++;
        }
        row++;
        cout << endl;
    }
    return 0;
}

