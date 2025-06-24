#include <iostream>
#include <string.h>

using namespace std;

int main()
{
    string s = "daabcbaabcbc";
    string part = "abc";
    int len1 = s.length();
    int len2 = part.length();

    while (s.length() > 0 && s.find(part) < s.length()) // until the string is greater than 0 and the position is always less than length of the string.
    {
        int pos = s.find(part);
        s.erase(pos, len2);
    }
    cout << s << endl;
    return 0;
}
