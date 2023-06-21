#include<iostream>
#include<limits.h>
using namespace std;
int main()
{
    int arr[]={-1,1,2,4,6,8,10};
    int size=6;
    int mini=INT_MAX;
    for(int i=0;i<size;i++){
        if(arr[i]<mini){
            mini=arr[i];
        }
    }
    cout<<"The minumum number in array is"<<mini<<endl;
 return 0;
}