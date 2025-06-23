#include <iostream>
#include <unordered_map>
using namespace std;

// Unordered-map -- duplicate values can't be stored
// Stored in a stack like format 
// O/P: C:20
// B:20
// A:20

int main(){
    unordered_map<string,int> m;
    
    m.emplace("A",20);
    m.emplace("B",20);
    m.emplace("C",20);


    for(auto val:m){
        cout<<val.first<<":"<<val.second<<endl;
    }


    return 0;
}