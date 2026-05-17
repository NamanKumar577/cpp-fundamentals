#include <iostream>
using namespace std;

/*
Goal is to find the power without using the normal for loop becuase its complexity will be very high. Instead we focus on the binary form of the power.
We break it in the binary form also keep squaring ie x=x*x the given number. Where ever in the binary form we get one we update the answer by multiplying 
it with the x..So we just have to multiply with when there is one in binary form. 
*/




int main(){ 

    double x;
    int n;

    cin>>x>>n;

    double ans =1;
        long bitform =n;
        if(n==0) {cout<< 1; return 0;}
        if(x==1) {cout<< 1; return 0;}
        if(x==0) {cout<< 0; return 0;}

        if(bitform<0){
            x=1/x;
            bitform = -bitform;
        }
        while(bitform>0){
            if(bitform%2==1){
                ans *=x;
            }
            x*=x;
            bitform/=2;
        }
        cout<< ans;
    return 0;
}