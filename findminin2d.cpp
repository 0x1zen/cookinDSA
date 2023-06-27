#include<iostream>
#include<limits.h>
using namespace std;
int getMin(int arr[][3],int rows,int cols,int min){
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            if(arr[i][j]<min){
                min=arr[i][j];

            }
            
        }
        return min;
       
    }
}
int main()
{ 
     int arr[3][3]={
        {1,2,3},
        {4,5,20},
        {7,8,9}
    } ;
    int rows=3;
    int cols=3;
    int min=INT_MAX;
    int result=getMin(arr,rows,cols,min);
    cout<<result;
 return 0;
}