#include <iostream>
#include <string.h>
#include <algorithm>
using namespace std;

int main()
{
    string s = "the sky is blue";
    reverse(s.begin(), s.end()); // reversing the whole line
    string ans = "";
    int n = s.length();
    for (int i = 0; i < n; i++)
    { // reversing individual words
        string word = "";
        while (s[i] != ' ' && i < n)
        {
            word += s[i];
            i++;
        }
        reverse(word.begin(), word.end());
        if (word.length() > 0)
        { // No adding blank space for already existing spaces
            ans = ans + " " + word;
        }
    }
    cout<<ans<<endl;

    return 0;
}
