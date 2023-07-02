#include<iostream>
#include<vector>
#include<limits.h>
using namespace std;
int firstOcc(vector<int>arr,int target){
    int start=0;
    int end=arr.size()-1;
    int mid=start+(end-start)/2;
    int ans=-1;
    while(start<=end){
   if(arr[mid]==target){
     ans=mid;
    start=mid+1;
   }
   else if(target<arr[mid]){
    end=mid-1;
   }
   else if(target>arr[mid]){
    start=mid+1;
   }
   mid=start+(end-start)/2;
    }
    return ans;
}
int main()
{
    vector<int>arr{1,2,3,5,7,7,7,7,7,7};
    int target=7;
    int ans=firstOcc(arr,target); 
    if(ans==-1){
        cout<<"Not Found";
    }
    else{
cout<<"The Last occurance is"<<ans;
    }
    
 return 0;
}