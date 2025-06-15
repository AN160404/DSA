#include<iostream>
#include <vector>
using namespace std;

int main(){
    vector<int> vec={-2,1,-3,4,-1,2,1,-5,4};
    int count=vec.size();
    int currsum=0;
    int maxsum=INT16_MIN;
    for (int i = 0; i < count; i++)
    {
        currsum+=vec[i];
        maxsum=max(maxsum,currsum);
        if(currsum<0){
            currsum=0;
        }
    }
    cout<<maxsum<<endl;    
}