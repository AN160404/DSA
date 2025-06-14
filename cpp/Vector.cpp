#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector<int> vec(3,1);
    for(int i:vec){
        cout<<i<<endl;
    }
    return 0;
}