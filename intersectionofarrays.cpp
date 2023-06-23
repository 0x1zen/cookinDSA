#include<iostream>
#include<vector>
#include<limits.h>
using namespace std;
int main()
{
    vector<int>arr={2,4,6,8,10};
    vector<int>brr={1,2,4,3,8};
    vector<int>ans;
    for(int i=0;i<arr.size();i++){
        int element=arr[i];
        for(int j=0;j<brr.size();j++){
            
            if(element==brr[j]){
                brr[j]=INT_MIN;
                ans.push_back(element);
            }
        }
        
    }
    // Print ans
    for(int i=0;i<ans.size();i++){
        cout<<ans[i]<<endl;
    }
 return 0;
}