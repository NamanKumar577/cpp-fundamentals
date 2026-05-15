#include <iostream>
#include <vector>
#include <climits>
using namespace std;

/*
Here task is to find the max sub array sum , the sub array must be the continous part of the given array.
Here the main logic begin kadane's algorithm is that there is not point having a negative sum ie negative current_sum in the code so we make it zero because the negative
will never contribute to the max sum so we just make it zero and start from that index. with this thinking we can drop the number of nested loops from three to just one.
Decreasing the time complexity.
*/ 



int main(){
    vector<int> nums={-2, 1, -3, 4, -1, 2, 1, -5, 4};

    int n = nums.size();

    int max_sum =INT_MIN;
    int current_sum=0;

    for(int i=0; i<n ;i++){
        current_sum+=nums[i];
        max_sum=max(current_sum,max_sum);
        if(current_sum<0){
            current_sum=0;
        }
    }
    cout<<max_sum;

    return 0;
}