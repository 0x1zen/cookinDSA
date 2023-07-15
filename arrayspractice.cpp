#include<iostream>
#include<vector>
#include<limits.h>
using namespace std;
bool find(int arr[][4],int rows,int cols,int target){
  int start=0;
  int end=rows*cols-1;
  int mid=start+(end-start)/2;
  while(start<=end){
   int rowIndex=mid/cols;
   int colIndex=mid%cols;
   int element=arr[rowIndex][colIndex];
   if(element==target){
    return true;
   }
   
   else if(element<target){
    start=mid+1;
   }
   else{
     end=mid-1;
   }
   mid=start+(end-start)/2;
  }
  return false;
}
int main()
{
  int arr[5][4]={
    {1,2,3,4},
    {5,6,7,8},
    {9,10,11,12},
    {12,14,15,16},
    {17,18,19,20}
    };
    int rows=5;
    int cols=4;
    int target;
    cout<<"Enter a number between 1-20"<<endl;
    cin>>target;
    bool ans=find(arr,rows,cols,target); 
    if(ans){
      cout<<"Found";
    }
    else{
      cout<<"Not found";
    }

 return 0;
}