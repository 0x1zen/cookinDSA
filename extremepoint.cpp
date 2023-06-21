#include<iostream>
using namespace std;
int main()
{
    int arr[8]={10,20,30,40,50,60,70,80};
    int size=8;
    int start=0;
    int end=size-1;
    while(true){
        if(arr[start]>arr[end])
        break;
        if(arr[start]==arr[end]){
            cout<<arr[start];
        }
    else{
        cout<<arr[start] <<endl;
        cout<<arr[end] <<endl;
    }
        
       
        start++;
        end--;
        
        
    }
 return 0;
}