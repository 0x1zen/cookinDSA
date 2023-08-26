#include<iostream>
#include<vector>
#include<limits.h>
#include<set>
#include<string.h>
#include<algorithm>
using namespace std;
//  int n;
//     cin>>n;
// for(int row=0;row<n;row++){
//     for(int col=0;col<n-row-1;col++){
//         cout<<" ";
//     }
//     // Counting
//     for(int col=0;col<row+1;col++){
//         cout<<row+col+1;
//     }
//     // reverse couting
//     int rev=2*row;
//     for(int col=0;col<row;col++){
// cout<<rev;
// rev--;
//     }
//     cout<<endl;
// }
// int max(int a,int b){
//     if(a>b){
//         return a;
//     }
//     else{
//         return b;
//     }
// }

// int findLength( char name[]){
//     int i=0;
//     int length=0;
//     while(name[i]!='\0'){
//       length++;
//       i++;
//     }
//     return length;
// }
// string findReverse(char name[],int size){
//    int i=0;
//   int  j=size-1;
//     while(i<=j){
//     swap(name[i],name[j]);
//     i++;
//     j--;
//     }
//     return name;
// }
string replaceBlanks(char name[],int size){
    int i=0;
    for(int i=0;i<size;i++){
        if(name[i]==' '){
            name[i]='@';
        }
    }
    return name;
}
int main(){


char name[50];

cin.getline(name,50);
cout<<"initially "<<name<<endl;
int size = strlen(name);
string replace=replaceBlanks(name,size);
cout<<"after "<<replace;
// int value=(int)name[3];
// cout<<value;


//    const int arraySize = 5; // Change this to the desired array size
// int myArray[arraySize];
// // for (int i = 0; i < arraySize; ++i) {
// //     cout << "Enter element " << i << ": ";
// //     cin >> myArray[i];
// // }
// while(arraySize){
//     cout << "Enter element " << i << ": ";
//     cin >> myArray[i];
// }
// cout << "Entered elements: ";
// for (int i = 0; i < arraySize; ++i) {
//     cout << myArray[i] << " ";
// }
// cout << endl;


// vector<int>arr{12,16,22,30,35,39,42,45,48,50,53,55,56};
// int x=35;
// int start=0;
// int end=arr.size()-1;
// int ans=-1;
// while(start<=end){
//     int mid=start+(end-start)/2;
//     if(arr[mid]>=x){
//         ans=mid;
//         end=mid-1;
//     }
//     else if(x>arr[mid]){
//         start=mid+1;
//     }
//     else {
//         end=mid


// vector<int>arr{-1,-1,2,5,6,8,-2,1,-10};
// int start=0;
// for(int i=0;i<arr.size();i++){
//     for(int j=0;j<arr.size();j++){
//         if(arr[j]>arr[j+1]){
//             swap(arr[j],arr[j+1]);
//         }
//     }
// };
// for(int i=0;i<arr.size();i++){
//     cout<<arr[i]<<" ";
// }
// for(int i=0;i<n;i++)










//         int start=0;
//     int end=nums.size()-1;
//     int i=0;
//     while(i<=end){
//         if(nums[i]==0){
//             swap(nums[start],nums[i]);
//             start++;
//             i++;
//         }
//         else if(nums[i]==1){
//             i++;
//         }
//         else if(nums[i]==2){
//             swap(nums[i],nums[end]);
//             end--;

//         }
//     }
//     for(int i=0;i<nums.size();i++){
//         cout<<nums[i];
//     }
// for(int i=0;i<6;i++){
//     for(int j=0;j<i+1;j++){
//         cout<<"*";
//     }
//     cout<<endl;
// }
    // int n;
    // cin>>n;


// int a=5;
// int b=6;
// cout<<max(a,b);

// for(int row=0;row<n;row++){
//     for(int col=0;col<n-row-1;col++){
//         cout<<" ";
//     }
//     // Counting
//     for(int col=0;col<row+1;col++){
//         cout<<row+col+1;
//     }
//     // reverse couting
//     int rev=2*row;
//     for(int col=0;col<row;col++){
// cout<<rev;
// rev--;
//     }
//     cout<<endl;
// }
return -100;



    // for(int r=0;r<n;r++){
    //     for(int c=0;c<n;c++){
    //         cout<<"*";
    //     }
    //     cout<<endl;
    // }
// for(int row=0;row<n;row++){
//     // Spaces
//     for(int col=0;col<n-row-1;col++){
//         cout<<" ";
//     }
//     // stars
//     for(int col=0;col<2*row+1;col++){
//         if(col==0 || col==2*row ||row==n-1){
//             cout<<"*";
//         }
//         else{
//             cout<<" ";
//         }
        
//     }
//     cout<<endl;
// }
// for(int row=0;row<n;row++){
// for(int col=0;col<row;col++){
//     cout<<" ";
// }
// for(int col=0;col<2*n-2*row-1;col++){
//     if(col==0 || col==2*n-2*row-2 || row==0){
//         cout<<"*";
//     }
//     else{
//         cout<<" ";
//     }
// }
// cout<<endl;
// }

//     for(int row=0;row<n;row++){
//     // Spaces
// for (int col=0;col<n-row-1;col++){
//     cout<<" ";
// }
// // Stars
// for(int col=0;col<row+1;col++){
//     cout<<"* ";
// }
// cout<<endl;
// }
// for(int row=0;row<n;row++){
//     // SPaces
//     for(int col=0;col<row;col++){
//         cout<<" ";
//     }
//     for(int col=0;col<n-row;col++){
//         cout<<"* ";
//     }
//     cout<<endl;
// }



//     for(int row=0;row<n;row++){
//     // Spaces
//     for(int col=0;col<n-row-1;col++){
//         cout<<" ";
// }
// // stars
//  for(int col=0;col<row+1;col++){
//         cout<<"* ";
//     }
//      cout<<endl;
// }
}

// for(int row=0;row<n;row++){
//     // Spaces
// for (int col=0;col<n-row-1;col++){
//     cout<<" ";
// }
// // Stars
// for(int col=0;col<row+1;col++){
//     cout<<"* ";
// }
// cout<<endl;
// }