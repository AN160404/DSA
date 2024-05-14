#include <iostream>
using namespace std;

int main() {
    cout << "Pattern like:\n111\n 22\n  3(while loop)";
    int n = 3, row = 1;
    cout << "\n Output \n";
    while (row <= n) {
        int space = 0;  // Start with 0 space in each row
        while (space < row) {  // Loop for spaces
            cout << " ";
            space++;
        }
        int star =n-row+1;
        while (star) {  // Loop for stars
            cout << row;
            star--;
        }
        row++;
        cout << endl;
    }
    return 0;
}
