#include<iostream>
#include <vector>
#include <algorithm>
using namespace std;
int main(){
    vector<int> prices={7,1,5,3,6,4};
    int size=prices.size();
        int bestbuy=prices[0];
        int pos=0,profit=0;
        for(int i=0;i<size;i++){
            if(prices[i]>bestbuy){
                profit=max(profit,prices[i]-bestbuy);    //profit when other values are greater than bestbuy
            }
            bestbuy=min(bestbuy,prices[i]); //minimizing the bestbuy
        }

        if(profit>0){
            cout<< profit<<endl;
        }
        return 0;
}