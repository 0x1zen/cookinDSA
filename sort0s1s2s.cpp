#include<iostream>
#include<vector>
using namespace std;
int main()
{
    vector<int>arr{1,1,0,0,1,1,2,2,0};
    int start=0;
    int i=0;
    
    int end = arr.size() - 1;
    while(i<=end){
        if(arr[i]==0){
            swap(arr[start],arr[i]);
            i++;
            start++;
        }
        else if(arr[i]==1){
            i++;
        }
        else if(arr[i]==2){
            swap(arr[i],arr[end]);
            end--;  
        }
    }
    for(int i=0;i<arr.size();i++){
        cout<<arr[i];
    }

 return 0;
}