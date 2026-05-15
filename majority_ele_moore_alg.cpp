#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

/*
Our goal is same the one mentioned in the file majority_element.cpp , to find the element with highest frequency. But here we used Moore's algorithm . Which
says to just count the frequency while going over the array once . The idea is that we will go over array and ++ the frequency if equal elements and -- freq
if unequal elements.
Assumption is that the element with the majority will make the frequency positive , it will cancel
out all other elements.

*/



int main(){
    vector<int> nums = {1,1,2,2,2,1,1};

    int n = nums.size();

    int freq=0, ans =0;

    for(int i=0; i<n;i++){
        if(freq==0){
            ans=nums[i];
        }

        if(ans==nums[i]){
            freq++;
        }
        else freq--;
    }
    cout<<ans;


    return 0;
}