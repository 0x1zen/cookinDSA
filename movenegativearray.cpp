#include<iostream>
#include<vector>
#include<limits.h>
using namespace std;
int main()
{
vector<int>arr{1,2,5,-1,-6,4,9,10,-1};
for(int i=0;i<arr.size();i++){
    for(int j=0;j<arr.size();j++){
        if(arr[j]>arr[j+1]){
            swap(arr[j],arr[j+1]);
        }
    }
}

for(int i=0;i<arr.size();i++){
    cout<<arr[i];
}
 return 0;
}