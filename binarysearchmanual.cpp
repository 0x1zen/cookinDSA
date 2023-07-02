#include<iostream>
#include<vector>
#include<limits.h>
using namespace std;
int binarySearch(int arr[],int start,int end,int size,int target){
int mid=(start+end)/2;
while(start<=end){
    int element=arr[mid];
    if(element==target){
        return mid;
    }
    else if(target<element){
       end=mid-1;
    }
    else{
        start=mid+1;
    }
    mid=(start+end)/2;

}
return -1;

}
int main()
{
    int arr[]={2,4,6,8,10,12,14};
    int size=7;
    int target=6;
    int start=0;
    int end =size-1;
    int indexOfTarget=binarySearch(arr,start,end,size,target);
    if(indexOfTarget==-1){
        cout<<"Not Found"<<endl;
    } 
    else{
        cout<<"Target found at "<<indexOfTarget<<" index"<<endl;
    }
 return 0;
}