#include <iostream>
#include <string.h>

using namespace std;

bool isAlphanumeric(char ch){
    if (ch >= '0' && ch <= '9' || tolower(ch) >= 'a' && tolower(ch) <= 'z')
    {
        return true;
    }
    return false;
}
int main()
{
    string s="A man, a plan, a canal: Panama";
    int i = 0, j = s.length() - 1;

    while (i < j)
    {
        if (!isAlphanumeric(s[i]))
        {
            i++;
            continue;
        }
        if (!isAlphanumeric(s[j]))
        {
            j--;
            continue;
        }
        if (tolower(s[i]) != tolower(s[j]))
        {
            cout<<"Not Palindrome"<<endl;
        }

        i++;
        j--;
    }
    cout<<"Palindrome"<<endl;
    return 0;
}

