#include<iostream>
#include<numeric>
#include<vector>
using namespace std;
bool isPossibleSolution(vector<int>nums,int k,int mid){
    int pageSum=0;
    int allocated=1;
    for(int i=0;i<nums.size();i++){
        if(nums[i]>mid){
            return false;
        }
        if(pageSum+nums[i]>mid){
            allocated++;
            pageSum=nums[i];
            if(allocated>k){
                return false;
            }
        }
        else{
            pageSum+=nums[i];
        }
    }
    return true;
}
int main()
{
    vector<int>nums{1,2,3,4,5};
    int k = 2;
    if(k>nums.size())
    return -1;
    int ans=-1;
    int start=0;
    int end=accumulate(nums.begin(),nums.end(),0);
    while(start<=end){
        int mid=start+(end-start)/2;
        if(isPossibleSolution(nums,k,mid)){
            ans=mid;
            end=mid-1;
        }
        else{
            start=mid+1;
        }
    }
    cout<<ans;
 return 0;
}