#include<iostream>
using namespace std;
int main()
{
    // int arr[]={2,4,6,8,10};
    // for(int index=0;index<5;i++){
    //     cout<<arr[index]<<", ";
    // }
    int arr[5];
    cout<<"Enter the values";
    for(int i=0;i<5;i++){
        cin>>arr[i];
    }
    for(int i=0;i<5;i++){
        cout<<"{"<<arr[i]<<"}"<<", "<<endl;
    }
 return 0;
}