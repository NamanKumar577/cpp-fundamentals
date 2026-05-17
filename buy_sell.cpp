#include <iostream>
#include <vector>
using namespace std;

int main(){
    vector<int> prices={7,1,5,3,6,4};
    int n = prices.size();

    int buy= prices[0];
    int profit=0;

    for(int i=1;i<n;i++){
        if(prices[i]<buy) buy=prices[i];

        else if(profit < prices[i]-buy)profit= prices[i]-buy;
    }
    cout<<profit;

    return 0;
}