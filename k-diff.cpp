#include<iostream>
#include<vector>
#include<limits.h>
#include<algorithm>
#include<set>
using namespace std;
int twoPointer(vector<int>arr,set<pair<int,int>>ans,int k){
    int i=0;
    int j=1;
    while(j<arr.size()){
        int diff=arr[j]-arr[i];
        if(diff==k){
            ans.insert({arr[i],arr[j]});
            i++;
            j++;
        }
        else if(diff<k){
            j++;
        }
        else{
            i++;
        }
    }
    return ans.size();
}
int main()
{ 
    // vector<int>arr{1,3,1,5,4};
    vector<int>arr{1,1,1,1,1};
    sort(arr.begin(),arr.end());
    set<pair<int,int>>ans;
    int k=0;
    int pairs=twoPointer(arr,ans,k);
    cout<<pairs;

 return 0;
}