// Find Max
#include<iostream>
#include<limits.h>
using namespace std;
int main()
{
    int arr[]={1,2,3,4,5,6,7,8,9,100};
    int maxx=INT_MIN;
    int size=10;
    for(int i=0;i<size;i++){
        if(arr[i]>maxx){
            maxx=arr[i];
        }
    }
    cout<<"The max Number in this array is "<<maxx<<endl;
 return 0;
}