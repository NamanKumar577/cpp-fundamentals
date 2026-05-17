#include <iostream>
#include <vector>

using namespace std;


/*
Here we are using two pointer approach. Task is to find the max possible volume of water . We start with boundary conditions and change the end point depending
on which has smaller height . We change the one with smaller height. and move through the array and while all this we record the max volume and at the give that as\
output.We change the end point with smaller height because if we change the the one with greator height it will never change the volume because the volume depends
one the height which is smaller.



*/

int main(){
    vector<int> height={1,4,5,6,2,8,9};
    int left=0,right=height.size()-1;
    int max_water=0;


    while(left<right){
    int w = right-left;
    int hei = min(height[left], height[right]);
    int water = w*hei;
    max_water = max(max_water,water);
    
    height[left]<height[right]?left++:right--;
    }
    cout<< max_water;
    return 0;
}