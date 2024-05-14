#include <iostream>
using namespace std;

int main() {
    cout << "Pattern like:\n   1\n 22\n333(while loop)";
    int n = 3, row = 1;
    cout << "\n Output \n";
    while (row <= n) {
        int space=1;  // Start with 0 space in each row
        while (space<=n-row) {  // Loop for spaces
            cout << " ";
            space++;
        }
        int col=1;
        while (col<=row)
        {
            cout<<row;
            col++;
        }
        row++;
        cout << endl;
    }
    return 0;
}
