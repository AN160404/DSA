#include <iostream>

using namespace std;

int sorted(int arr[],int target,int st,int end){
    int mid=st+(end-st)/2;
    if(target== arr[mid]) return mid;
    else if(target<arr[mid]) return sorted(arr, target, st,mid-1);
    else return sorted(arr,target,mid+1,end);
    return -1;
}
int main(){
    int arr[5]={1,2,3,4,5};
    int target=2;
    int st=0,end= sizeof(arr)/sizeof(arr[0]) - 1;
    int ans=sorted(arr,target,st,end);
    if(ans>-1) cout<<"Found at "<<ans<<endl;
    else cout<<"Not Found"<<endl;
    return 0;
}