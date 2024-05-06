#include <iostream>
using namespace std;

int main()
{
    int n=3,s=0,i=0,j=0;
    int arr3[i][j]={{0}};

    int arr1[3][3]={{1,2,3},{1,2,3},{1,2,3}};
    int arr2[3][3]={{1,2,3},{1,2,3},{1,2,3}};
    cout<<"Algo for square matices' sum \n";
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            arr3[i][j] = arr1[i][j]+arr2[i][j];
        }
    }
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            cout<<arr3[i][j]<<" ";
        }
        cout<<endl;
    }
    
    return 0;
}