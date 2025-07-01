#include <iostream>

using namespace std;

bool sorted(int arr[],int n){
    if(n==0 || n==1) return true;
    return (arr[n-1]>=arr[n-2]) && sorted(arr,n-1); // TC = O(n)
    
}
int main(){
    int arr[5]={1,2,3,41,5};
    int n=5;
    int ans=sorted(arr,n);
    if(ans==1) cout<<"Sorted"<<endl;
    else cout<<"Not Sorted"<<endl;
    return 0;
}