//Counting Sort O(n)
#include <iostream>
using namespace std;
class Algo
{
    public:
    void countingSort(int a[],int n,int k){
        int b[n]={0};
        int count[k+1]={0};

        for (int i = 0; i < n; i++)
        {
            count[a[i]]++;
        }
        for(int i=1;i<=k;i++)
        {
            count[i]=count[i]+count[i-1];
        }
        for(int i=n-1;i>=0;i--)
        {
            count[a[i]]--;
            b[count[a[i]]]=a[i];
        }
        for (int i = 0; i < n; i++)
        {
            a[i]=b[i];
            cout<<a[i]<<endl;
        }
    }
};
int main()
{
    Algo obj;
    int n=7,k=4;
    int a[n]={2,1,2,3,1,2,4};
    obj.countingSort(a,n,k);
}