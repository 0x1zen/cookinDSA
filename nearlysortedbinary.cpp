#include<iostream>
#include<vector>
#include<limits.h>
using namespace std;
int binarySearch(vector<int>arr,int target){
    int start=0;
    int end=arr.size()-1;
    int mid=start+(end-start)/2;
    while(start<=end){
        if(arr[mid]==target){
            return mid;
        }
        else if(mid+1<arr.size() && arr[mid+1]==target){
            return mid+1;
        } 
        else if(mid-1>=0 && arr[mid-1]==target){
            return mid-1;
        }
        else if(arr[mid]<target){
            start=mid+2;
        }
        else if(arr[mid]>target){
            end=mid-2;
        }
        mid=start+(end-start)/2;
    }
}
int main()
{
    // vector<int>arr{10,3,40,20,50,80,70};
    vector<int>arr{6,3,2,5,1,8};
    int target=8;
    int ans=binarySearch(arr,target);
    cout<<"Hnce the index of number is "<<ans<<endl;

 return 0;
}