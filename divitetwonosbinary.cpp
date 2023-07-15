#include<iostream>
#include<vector>
#include<limits.h>
using namespace std;
int solve(int dividend,int divisor){
    int start=0;
    int end=abs(dividend);
    int mid=start+(end-start)/2;
    int ans=0;
    while(start<=end){
        // for perfect soltioin
        if(abs(mid*divisor) == abs(dividend)){
        ans=mid;
        break;
        }
        // for not perfecy solution
        if(abs(mid*divisor)>abs(dividend)){
            end=mid-1;
        }
        else{
            ans=mid;
            start=mid+1;
        }
        mid=start+(end-start)/2;
    }
    if(divisor<0 && dividend<0 || divisor>0 && dividend>0){
        return ans;
    }
    else if(divisor<0 && dividend>0 || divisor>0 && dividend<0){
return -ans;
    }
    
}
int main()
{
    int dividend=22;
    int divisor=7;
    int ans=solve(dividend,divisor);
    // cout<<ans; 
    double step=0.1;
    double finalAns=ans;
    int precision;
    cin>>precision;
    for(int i=0;i<precision;i++){
        for(double j=finalAns;j*divisor<=dividend;j=j+step){
        finalAns=j;
        }
        step=step/10;
    }
    cout<<finalAns<<endl;

 return 0;
}
