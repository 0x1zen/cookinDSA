#include<iostream>
using namespace std;
int printarray(int arr[],int size){
    for(int i=0;i<size;i++){
        cout<<arr[i]<<" "<<endl;
        cout<<endl;
    }
}
void inc(int arr[], int size) {
    arr[0] += 8;
    printarray(arr,size);
}

int main() {
    int arr[] = {2, 6};
    int size = 2;
    inc(arr, size);
    cout<<"Manually printing The main array to see if the changes of the fuction refelct in the main array or not"<<endl;
    cout<<arr[0]<<endl;
    return 0;
}
