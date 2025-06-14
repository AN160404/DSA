//Counting Sort O(n)
#include <iostream>
#include <string>
using namespace std;
class Algo
{
    public:
    int getMax(int a[],int n)
    {
        size_t max_length = 0;
        for (int i = 0; i < n; ++i) {
            size_t length = to_string(a[i]).length();
            if (length > max_length) {
                max_length = length;
            }
        }
    return max_length;

    }
    void radixSort(int a[],int n){
        int b[n]={0};
        int count[10]={0};
        int max=getMax(a,n);

        // for (int i = 0; i < n; i++)
        // {
        //     count[a[i]]++;
        // }
        // for(int i=1;i<=k;i++)
        // {
        //     count[i]=count[i]+count[i-1];
        // }
        // for(int i=n-1;i>=0;i--)
        // {
        //     count[a[i]]--;
        //     b[count[a[i]]]=a[i];
        // }
        // for (int i = 0; i < n; i++)
        // {
        //     a[i]=b[i];
        //     cout<<a[i]<<endl;
        }    
};

int main()
{
    Algo obj;
    int n=7;
    int a[n]={2,1,2,3,1,2,4234};
    obj.radixSort(a,n);
}