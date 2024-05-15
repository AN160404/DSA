#include <iostream>
using namespace std;

int main() {
    cout << "Pattern like:\n1234\n 123\n  12\n   1 (while loop)";
    int n = 4, row = 1;
    cout << "\nOutput\n";
    while (row <= n) {
        int space = 1;  // Start with 1 space in each row
        while (space <= row - 1) { // Loop for spaces
            cout << " ";
            space++;
        }
        int col = 1;
        while (col<=n-row+1) {
            cout << col;
            col++;
        }
        row++;
        cout << endl;
    }
    return 0;
}

