#include<iostream>
#include<vector>
#include<limits.h>
using namespace std;
int findMissing(int arr[],int n){
    for(int i=0;i<n;i++){
        int index=abs(arr[i]);
        if(arr[index-1]>0){
    //    arr[index-1]*=-1;
    arr[index-1]=arr[index-1]*-1;
        }
    }
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    // All positive are missing
    for(int i=0;i<n;i++){
        if(arr[i]>0){
            cout<<i+1<<" ";
        };
    }
}
int main()
{
    int n;

   int arr[]={1,3,5,3,4};
   n=sizeof(arr)/sizeof(int);
findMissing(arr,n);
 return 0;
}