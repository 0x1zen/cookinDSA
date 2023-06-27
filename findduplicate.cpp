#include<iostream>
#include<vector>
#include<limits.h>
using namespace std;
int main()
{ 
    vector<int>arr{1,1,2,2,3,4,5,6,7,7,8,9,9};
    for(int i=0;i<arr.size();i++){
        int element=arr[i];
        bool foundDuplicate=false;
        for(int j=i+1;j<arr.size();j++){
            if(element==arr[j]){
                foundDuplicate=true;
                break;
            }

        }
        if(foundDuplicate){
            cout<<element<<" ";
        }
    }
 return 0;
}