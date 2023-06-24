#include<iostream>
#include<vector>
#include<limits.h>
using namespace std;
int main()
{ 
    int arr[]={10,20,30,40,50};
    int size=5;
    int sum=80;
    for(int i=0;i<size;i++){
        
        for(int j=i+1;j<size;j++){
            
            for(int k=j+1;k<size;k++){
           if(arr[i]+arr[j]+arr[k]==sum){
            cout<<arr[i]<<","<<arr[j]<<","<<arr[k]<<endl;
           }
            }
        }
    }
 return 0;
}