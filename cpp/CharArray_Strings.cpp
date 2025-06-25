#include <iostream>
#include <string.h>

using namespace std;
bool isSame(int freq[],int windfreq[]){
    for(int i=0;i<26;i++){
        if(freq[i]!=windfreq[i]){
            return false;
        }
    }
    return true;
}
int main()
{
    string s1 = "ab";
    string s2= "eidbaooo";
    
    // Storing the frequency of s1 in another array using hash table concept
    int freq[26]={0};
    for(int i=0;i<s1.length();i++){
        freq[s1[i]-'a']++;
    }

    int windsize=s1.length();

    for(int i=0;i<s2.length();i++){
        int windIdx=0, idx=i;

        int windfreq[26]={0};
        while(idx<s2.length() && windsize>windIdx){
            windfreq[s2[idx]-'a']++; // Storing all the values of s2 in hash table;
            windIdx++;
            idx++;
        }

        // Comparing the frequencies of s1 in s2
        if(isSame(freq,windfreq)){
            cout<<"exists"<<endl;
        }
    }

    return 0;
}
