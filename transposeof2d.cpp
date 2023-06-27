// #include<iostream>
// using namespace std;
// void printArray(int arr[][3],int rows,int cols){
//     for(int i=0;i<rows;i++){
//         for(int j=0;j<cols;j++){
//             cout<<arr[i][j]<<" ";
//         }
//         cout<<endl;
//     }
    
// }
// int transposeArray(int arr[][3],int rows,int cols,int transpose[][3]){
//     for(int i=0;i<rows;i++){
//         for(int j=0;j<cols;j++){
//             transpose[j][i]=arr[i][j];
//         }
//     }
// }

// int main()
// {
//     int arr[3][3]={
//         {1,2,3},
//         {4,5,6},
//         {7,8,9}
//     } ;
//     int rows=3;
//     int cols=3;
//     int transpose[3][3];
//    cout << "Original Array" << endl;
//     printArray(arr, rows, cols);
    
//     cout << "Transposed Array" << endl;
//     printArray(transpose, cols, rows);

//  return 0;
// }
#include<iostream>
using namespace std;

void printArray(int arr[][3], int rows, int cols){
    for(int i = 0; i < rows; i++){
        for(int j = 0; j < cols; j++){
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }
}

void transposeArray(int arr[][3], int rows, int cols, int transpose[][3]){
    for(int i = 0; i < rows; i++){
        for(int j = 0; j < cols; j++){
            transpose[j][i] = arr[i][j];
        }
    }
}

int main(){
    int arr[3][3] = {
        {1, 2, 3},
        {4, 5, 6},
        {7, 8, 9}
    };
    int rows = 3;
    int cols = 3;
    int transpose[3][3];
    
    cout << "Original Array" << endl;
    printArray(arr, rows, cols);
    
    transposeArray(arr, rows, cols, transpose);
    
    cout << "Transposed Array" << endl;
    printArray(transpose, cols, rows);
    
    return 0;
}
