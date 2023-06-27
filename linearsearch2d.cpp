#include<iostream>
using namespace std;
string findKey(int arr[][3],int rows,int cols,int key){
    for(int i=0;i<rows;i++){
        for(int j=0;j<cols;j++){
            if(arr[i][j]==key){
                
                return "present";
            }
            
        }
    }
    return "absent";
}
int main()
{
    int arr[3][3]={
        {1,2,3},
        {4,5,6},
        {7,8,9}
    } ;
    int key=20;
    int rows=3;
    int cols=3;
    string result=findKey(arr,rows,cols,key);
    cout<<result<<endl;
 return 0;
}