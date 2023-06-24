#include<iostream>
#include<vector>
#include<limits.h>
using namespace std;
int main()
{
    int arr[]={2,4,6,8};
    int brr[]={1,3,5};
    int sizea=4;
    int sizeb=3;
    vector<int> ans;

    for(int i=0;i<sizea;i++){
        ans.push_back(arr[i]);
    } 
    for(int i=0;i<sizeb;i++){
        ans.push_back(brr[i]);
    }
   
    for(int i=0;i<ans.size();i++){
        cout<<ans[i];
    }
 return 0;
}