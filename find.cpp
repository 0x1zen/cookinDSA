#include<iostream>
using namespace std;
bool find(int arr[],int size,int key){
    for(int i=0;i<size;i++){
        if(arr[i]==key){
            return true;
        }
           
        
    }
    return false;
   
}
int main()
{
    int arr[5]={2,4,6,8,10};
    int size=5;
    int key;
    cout<<"Enter the key you want to find"<<endl;
    cin>>key;
    if(find(arr,size,key)){
        cout<<"Found"<<endl;
    }
    else{
        cout<<"Not Found";
    }
 return 0;
}