#include<iostream>
#include<vector>
using namespace std;
//reversing the array
int main(){
    vector<int> vec={1,2,3,4,5};
    
    // vector<int>::iterator a;   No need for this due to auto
    for(auto a=vec.rbegin();a!=vec.rend();a++){
        cout<<*(a)<<endl;
    }

    return 0;
}