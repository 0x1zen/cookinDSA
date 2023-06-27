#include<iostream>
using namespace std;
int main()
{
    int arr[56][56]; 
    int brr[3][3];
    // {
    // {1,2,3},
    // {4,5,6},
    // {7,8,9}};
    int rows=3;
    int cols=3;
    for(int i=0;i<rows;i++){
        for(int j=0;j<cols;j++){
            cin>>brr[i][j];
        }
    }
    // Printing by rows
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            cout<<brr[i][j]<<" ";
        }
        cout<<endl;
    }
    // Printing by columns
     for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            cout<<brr[j][i]<<" ";
        }
        cout<<endl;
    }
 return 0;
}