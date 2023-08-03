#include<iostream>
#include<vector>
#include<limits.h>
#include<algorithm>
#include<set>
using namespace std;
int binarySearch(vector<int>arr,int start,int x){
int end=arr.size()-1;
while(start<=end){
    int mid=start+(end-start)/2;
    if(arr[mid]==x){
        return mid;
    }
    else if(x>arr[mid]){
        start=mid+1; 
    }
    else{
        end=mid-1; 
    }
}
return -1;
}
int main()
{
    vector<int>arr{1,1,1,1,1};
    sort(arr.begin(),arr.end());
    set<pair<int,int>> ans;
    int k=0;
    for(int i=0;i<arr.size();i++){
   if(binarySearch(arr,i+1,arr[i]+k)!=-1){
    ans.insert({arr[i],arr[i]+k});
   }
    }
    cout<<ans.size();

 return 0;
}