#include<iostream>
using namespace std;
int lowerBound(vector<int>arr,int x){
    int start=0;
    int end=arr.size()-1;
    int ans=-1;
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
int main()
{
    vector<int>arr{1,4,5,6,9,10};
    int x=7;
    int uttar= lowerBound(arr,x);
cout<<uttar;
 return 0;
}