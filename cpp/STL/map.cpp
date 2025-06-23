#include <iostream>
#include <map>
using namespace std;

// Multi-Map -- Same values can be added into this
// m[key]=value -- notation is not allowed in this

int main(){
    multimap<string,int> m;
    
    m.emplace("A",20);
    m.emplace("A",20);
    m.emplace("A",20);


    for(auto val:m){
        cout<<val.first<<":"<<val.second<<endl;
    }


    return 0;
}