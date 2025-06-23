#include<iostream>
#include<vector>
using namespace std;
//reversing the array
int main(){
    vector<int> vec={1,2,3,4,5};
    
    vector<int>::iterator name;
    for(name=vec.begin();name!=vec.end();name++){
        cout<<*(name)<<endl;
    }

    return 0;
}