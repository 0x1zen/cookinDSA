#include<iostream>
#include<vector>
#include<limits.h>
#include<set>
using namespace std;
vector<int>findRepeat(int arr[],int brr[],int crr[],int n1,int n2,int n3){
    int i,j,k;
i=j=k=0;
    set<int>st;
vector<int>ans;
while(i<n1 && j<n2 && k<n3){
    if(arr[i]==arr[j] && arr[j]==arr[k]){
    st.insert(arr[i]);
    i++;
    j++;
    k++;
    }
    else if(arr[i]<arr[j]){
        i++;
    }
    else if(arr[j]<arr[k]){
        j++;
    }
    else{
        k++;
    }
}
for(auto i:st){
    ans.push_back(i);
    
}
return vector<int>ans;
}
int main()
{
int arr[]={10,1,5,7,20,9};
int brr[]={11,15,7,8};
int crr[]={13,19,21,27,7};
int n1=6;
int n2=4;
int n3=5;


findRepeat(arr,brr,crr,n1,n2,n3);
 return 0;
}
