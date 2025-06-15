#include<iostream>
#include <vector>
using namespace std;

int main(){
    vector<int> vec={1,2,3,4,5};
    int count=vec.size();
    int maxsum=INT16_MIN;
    for (int i = 0; i < count; i++)
    {
        int currsum=0;
        for (int j = i; j < count; j++)
        {
            currsum+=vec[j];
            maxsum=max(maxsum,currsum);
        }
    }
    cout<<maxsum<<endl;

    
}