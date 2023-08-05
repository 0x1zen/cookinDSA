#include<iostream>
#include<vector>
#include<limits.h>
#include<algorithm>
using namespace std;
vector<int>twoPointer(vector<int>arr,int k,int x,vector<int>& ans){
        int low=0;
        int high=arr.size()-1;
        while(high-low>=k){
            if(x-arr[low]>arr[high]-x){
                low++;
            }
            else{
                high--;
            }
        }
        for(int i=low;i<=high;i++){
            ans.push_back(arr[i]);
        }

      return vector<int>(ans.begin()+low,ans.begin()+high+1);  
}
int main()
{
    vector<int>arr{12,16,22,30,35,39,42,45,48,50,53,55,56};
    int k=4;
    int x=35;
    vector<int>ans;
    twoPointer(arr,k,x,ans);
     for(int i=0;i<ans.size();i++){
            cout<<ans[i]<<" ";
        }
    // cout<<ans.size();
 return 0;
}