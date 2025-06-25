#include <iostream>
#include <string.h>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
    vector<char> chars = {'a', 'b', 'b', 'b', 'b', 'b', 'b', 'b', 'b', 'b', 'b', 'b', 'b'};
    int n = chars.size();
    int idx = 0;
    for (int i = 0; i < n; i++)
    {
        char ch = chars[i];
        int count = 0;

        while (i < n && chars[i] == ch)
        {
            count++;
            i++;
        }

        if (count == 1)
        {
            chars[idx++] = ch;
        }

        else
        {
            chars[idx++] = ch;
            string ct = to_string(count);
            for (char ch : ct)
            {
                chars[idx++] = ch;
            }
        }
        i--;
    }
    chars.resize(idx);   // Resizing it according to idx
    cout << chars.size() << endl;

    return 0;
}
