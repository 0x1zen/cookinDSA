#include<iostream>
#include<vector>
#include<limits.h>
using namespace std;
void moveNegToLeft(int arr[],int n){
    int high=n-1;
    int low=0;
    while(low<high){
        if(arr[low]<0){
            low++;
        }
        else if(arr[high]>0){
            high--;
        }
        else{
            swap(arr[low],arr[high]);
            
        }
    }
}
int main()
{
    int arr[]={1,2,-3,4,-5,-1,5,4,-10};
    int n=sizeof(arr)/sizeof(int);
   
    moveNegToLeft(arr,n);
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }

 return 0;
}