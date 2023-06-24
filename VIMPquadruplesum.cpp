#include<iostream>
#include<vector>
#include<limits.h>
using namespace std;
int main()
{ 
    int arr[]={10,20,30,40,50};
    int size=5;
    int sum=100;
    for(int i=0;i<size;i++){
        
        for(int j=i+1;j<size;j++){
            
            for(int k=j+1;k<size;k++){
         for(int h=k+1;h<size;h++){
            if(arr[i]+arr[j]+arr[k]+arr[h]==sum){
               cout<<arr[i]<<","<<arr[j]<<","<<arr[k]<<","<<arr[h]<<endl;
            }
         }
            }
        }
    }
 return 0;
}