#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;


/*Our task here is to print the element with the highest frequency . Here we did brute force we first sorted the elements than counted the frequency for each 
element till frequency is more than half the numbers of the elements in the array. Also there is only one such element because there cannot be more than one 
element with frequency higher than n/2 . that is mathematically not possible. */

int main(){
    vector<int> nums = {1,1,2,2,2,1,1};

    sort(nums.begin(),nums.end());

    int n = nums.size();

    int freq=1, ans = nums[0];

    for(int i=1; i<n;i++){
        if(nums[i]==nums[i-1]){
            freq++;
        }
        else{
            freq=1;
            ans=nums[i];
        }
        if(freq>n/2){
            cout<<ans; 
        }
    }
    cout<<ans;


    return 0;
}