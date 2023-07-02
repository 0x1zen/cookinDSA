#include<iostream>
#include<vector>
#include<limits.h>
using namespace std;
int firstOccurance(vector<int>v,int target){
    int start=0;
    int end=v.size()-1;
    int mid=start+(end-start)/2;
    int first=-1;
    while(start<=end){
        if(v[mid]==target){
       first=mid;
       end=mid-1;
        }
        else if(target<v[mid]){
            end=mid-1;
        }
        else if(target>v[mid]){
            start=mid+1;
        }
        mid=start+(end-start)/2;
    }
    return first;
}
int lastOccurance(vector<int>v,int target){
     int start=0;
    int end=v.size()-1;
    int mid=start+(end-start)/2;
    int last=-1;
    while(start<=end){
        if(v[mid]==target){
       last=mid;
       start=mid+1;
        }
        else if(target<v[mid]){
            end=mid-1;
        }
        else if(target>v[mid]){
            start=mid+1;
        }
        mid=start+(end-start)/2;
    }
    return last;
}
// int totalCount(vector<int>v,int target,int first,int last){
//     int total=last-first+1;
//     return total;
// }

int main()
{
    vector<int>v{2,4,4,4,4,4,4,5,6,9};
   int  target=4;
   int first=firstOccurance(v,target);
   int last=lastOccurance(v,target);
//    int total= totalCount(v,target,first,last);
int total=last-first+1;
cout<<total;
    // cout<<total<<endl; 
    // cout<<last;
 return 0;
}