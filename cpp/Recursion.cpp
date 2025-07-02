#include <iostream>
#include <vector>
using namespace std;

int subset(vector<int> arr,vector<int> ans, int i){  // O(n*2^n)
    if(i==arr.size()){
        for(int val:ans){
            cout<<val<<" ";
        }
        cout<<endl;
        return 0;
    }
    // Including
    ans.push_back(arr[i]);
    subset(arr,ans,i+1);

    // Excluding
    ans.pop_back();
    subset(arr,ans,i+1);
}
int main(){
    vector<int> arr={1,2,3};
    vector<int> ans;
    int i=0;
    subset(arr,ans,i);
    return 0;
}