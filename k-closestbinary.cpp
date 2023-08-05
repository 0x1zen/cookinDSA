#include<iostream>
#include<vector>
#include<limits.h>
using namespace std;
int lowerBound(vector<int>arr,int x){
    int start=0;
    int end=arr.size()-1;
    int ans=end;
    while(start<=end){
    int mid=start+(end-start)/2;
    if(arr[mid]>=x){
        ans=mid;
        end=mid-1;
    }
    else if(x>arr[mid]){
        start=mid+1;
    }
    else{
        end=mid-1;
    }

    }
    return ans;
}
vector<int> binarySearch(vector<int>arr,int k,int x){
    int high=lowerBound(arr,x);
    int low=high-1;
    vector<int>ans;
    while(k--){
        if (low < 0) {
            ans.push_back(arr[high++]);
        }
        else if (high >= arr.size()) {
            ans.push_back(arr[low--]);
        }
        else if (x - arr[low] > arr[high] - x) {
            ans.push_back(arr[high++]);
        }
        else {
            ans.push_back(arr[low--]);
        }
    }
    return ans;
    }
     

int main()
{ 
    //  vector<int>arr{12,16,22,30,35,39,42,45,48,50,53,55,56};
    vector<int>arr{3,5,8,10};
     int k=2;
     int x=15;
     vector<int>ans;
     ans=binarySearch(arr,k,x);
    for(int i=0;i<ans.size();i++){
        cout<<ans[i];
    }
    
 return 0;
}