#include<iostream>
#include<vector>
#include<limits.h>
using namespace std;
int findSqr(int n){
    int target=n;
   int  start=0;
   int end=n;
    int ans=-1;
    int mid=start+(end-start)/2;
    while(start<=end){
        if(mid*mid==target){
         return mid;
        }
        else if(mid*mid>target){
            end=mid-1;
        }
        else{
            ans=mid;
            start=mid+1;
        }
        mid=start+(end-start)/2;
    }
    return ans;
}
int main()
{ 
    int n;
    cin>>n;
    int ans=findSqr(n);
    cout<<ans<<endl;
    int precision;
    cout<<"Enter the the precision digits u want";
    cin>>precision;
    double step=0.1;
    double finalAns=ans;
    for(int i=0;i<precision;i++){
    for(double j=finalAns;j*j<=n;j=j+step){
        finalAns=j;
    }
    // to convert 0.1 to 0.01 we divide it by 10;
    step=step/10;
    }
    cout<<finalAns;
    

 return 0;
}