#include<iostream>
#include<vector>
#include<limits.h>
using namespace std;
int main()
{
    vector<int>arr{1,2,3,5,6};
    for(int i=0;i<arr.size();i++){
        int element=arr[i+1];
        for(int j=i+1;j<arr.size();j++){
            if(arr[j]>element){
                cout<<arr[i+1];
            }
        }
    } 
 return 0;
}