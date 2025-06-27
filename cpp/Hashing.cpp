#include <iostream>
#include <vector>
#include <string>
using namespace std;
int main(){
    string s="abdeasewasdczsd";
    int n=s.length();
    int hash[26]={0};
    for(int i=0;i<n;i++){
        hash[s[i]-'a']++;
    }
    cout<<"Frequency of d is: "<<hash['d'-'a'];
    
    
}