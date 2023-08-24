// For Infinite loop
#include<iostream>
using namespace std;
int main()
{
    int arr[]={1,3,4,5,6,8,9,13,14,17,19};
    int x=13;
    int i=0;
    int j=1;
    while(arr[j]<x){
        
        i=j;
        j=j*3;
    }
    int start=i;
    int end=j;
    int ans=-1;
    while(start<=end){
    int mid=start+(end-start)/2;
    if(arr[mid]==x){
      ans=mid;
      break;
    }
    else if(arr[mid]>x){
        end=mid-1;
    }
    else{
        start=mid+1;
    }
    }
    cout<<ans;

 return 0;
}