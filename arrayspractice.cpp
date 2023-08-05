#include<iostream>
#include<vector>
#include<limits.h>
using namespace std;
int pivot(vector<int>arr){
  int start=0;
  int end=arr.size()-1;
  int mid=start+(end-start)/2;
  while(start<end){
if(start==end){
      return start;
    }
   
 if(mid+1<=end && arr[mid]>arr[mid+1]){
  return mid;
 }
  
 if(mid-1>=start && arr[mid-1]>arr[mid]){
  return mid-1;
 }
  if(arr[start]>arr[mid]){
   end=mid-1;
 }
 else{
  start=mid+1;
 }
    mid=start+(end-start)/2;
  }
  // return -1;
}
int main()
{
  vector<int>arr{2,4,6,8,9,10}; 
  int ans=pivot(arr);
  cout<<ans;
 return 0;
}