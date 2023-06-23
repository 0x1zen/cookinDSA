#include<iostream>
#include<vector>
using namespace std;
int findUnique(vector<int>arr){
    int ans=0;
    for(int i=0;i<arr.size();i++){
        ans=ans^arr[i];
    }
    return ans;
}
int main()
{ 
    int n;
    cout<<"Enter the size of array";
    cin>>n;
    vector<int>arr(n);
    cout<<"Enter the elements to input"<<endl;
    for(int i=0;i<arr.size();i++){
        cin>>arr[i];
    }
    int uniqueElement=findUnique(arr);
    cout<<"The unique Element is"<<uniqueElement<<endl;
    
 return 0;
}