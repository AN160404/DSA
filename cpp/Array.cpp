#include<iostream>
#include <vector>
#include <algorithm>
using namespace std;


int main(){
    vector<int> arr={1,2,7,3,1,0};
    int size=arr.size();
        for(int i=1;i<=size-1;i++){
            if(arr[i-1]<arr[i] && arr[i]>arr[i+1]){
                cout<<i<<endl;
                return i;
            }
        }
        return 0;
    
    
}