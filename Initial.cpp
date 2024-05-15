#include <iostream>
using namespace std;

int main() {
    cout << "Pattern like:\n1234\n 234\n  34\n   4 (while loop)";
    int n = 4, row = 1;
    cout << "\nOutput\n";
    while (row <= n) {
        int space = 1;  // Start with 1 space in each row
        while (space <= row - 1) { // Loop for spaces
            cout << " ";
            space++;
        }
        int col = row;
        while (col<=n) {
            cout << col;
            col++;
        }
        row++;
        cout << endl;
    }
    return 0;
}

