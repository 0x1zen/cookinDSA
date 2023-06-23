#include<iostream>
#include<vector>
using namespace std;
vector<int> unionOfElements(int arr[],int sizea,int brr[],int sizeb,vector<int>& ans){
    for(int i=0;i<sizea;i++){
        ans.push_back(arr[i]);
    }
     for(int i=0;i<sizeb;i++){
        ans.push_back(brr[i]);
    }
    return ans;
}
int main()
{ 
    int arr[]={2,4,6,8};
    int sizea=4;
    int brr[]={1,3,5};
    int sizeb=3;
    vector<int>ans;
    vector<int>result=unionOfElements(arr,sizea,brr,sizeb,ans);
    cout<<"Union of elements is";
    for(int i=0;i<result.size();i++){
        cout<<result[i];
    }
 return 0;
}