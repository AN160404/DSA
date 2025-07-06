#include <iostream>
#include <vector>
#include <algorithm>
#include <set>
using namespace std;

    bool ispal(string part) {
        string temp = part;
        string rev;
        for (int i = temp.size() - 1; i >= 0; i--) {
            rev += temp[i];
        }
        if (rev == part) {
            return true;
        }
        return false;
    }
    void ispalindrome(vector<string>& str, string s,
                      vector<vector<string>>& ans) {
        if (s.size() == 0) {
            ans.push_back(str);
            return;
        }
        for (int i = 0; i < s.size(); i++) {
            string part = s.substr(0, i + 1);
            if (ispal(part)) {
                str.push_back(part);
                ispalindrome(str, s.substr(i + 1), ans);
                str.pop_back();
            }
        }
    }

int main()
{
    string s="aab";
    vector<vector<string>> ans;
    vector<string> str;
    ispalindrome(str, s, ans);
    for(const auto &val: ans){
        for(const auto &v: val){
            cout<<v<<" ";
        }
        cout<<endl;
    }
}