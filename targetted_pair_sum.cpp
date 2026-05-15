#include <iostream>
#include <vector>

using namespace std;

int main(){
    vector<int> nums = {2,7,11,15};
    int target = 9;
    int n = nums.size();
    int a=0,b=n-1;
    int sum = nums[a]+nums[b];

    while(target!=sum){
        if (sum>target)
        {
            b--;
            int sum = nums[a]+nums[b];
        }
        else{
            a++;
            int sum = nums[a]+nums[b];
        }
        
    }
    cout<<nums[a]<<","<<nums[b];


    return 0;
}