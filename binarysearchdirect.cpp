#include<iostream>
#include<vector>
#include<limits.h>
#include<algorithm>
using namespace std;
int main()
{ 
    vector<int>v{1,3,4,5,2,35};
    int size=6;
    int arr[]={1,3,4,5,6,32,45};
    int start=0;
    int sizearr=7;
    if(binary_search(arr,arr+sizearr,45)){
        cout<<"found"<<endl;
    }
    else{
        cout<<"not found;";
    }
 return 0;
}