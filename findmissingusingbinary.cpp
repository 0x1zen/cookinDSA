#include<iostream>
#include<vector>
#include<limits.h>
using namespace std;
findMissing(vector<int>arr){
    int start=0;
    int end=arr.size()-1;
    int mid=start+(end-start)/2;
   int next=mid+1;
    int previous=mid-1;
    while(start<=end){
        if(arr[mid]<next){
            cout<<mid;
        }
    }

}
int main()
{
    vector<int>arr{1,2,3,4,6,7,8};
     int missing=findMissing(arr);
 return 0;
}