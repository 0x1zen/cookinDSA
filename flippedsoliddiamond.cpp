#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    for(int row=0;row<n;row++){
        // Stars
        for(int col=0;col<n-row;col++){
            cout<<"*";
        }
        // hollow full pyramid spaces
        for(int col=0;col<2*row+1;col++){
            cout<<" ";
        }
        // stars
        for(int col=0;col<n-row;col++){
            cout<<"*";
        }
        cout<<endl;
    }
    // the other half
    for(int row=0;row<n;row++){
        // Stars
        for(int col=0;col<row+1;col++){
            cout<<"*";
        }
        // inverted full pyramid spaces
        for(int col=0;col<2*n-2*row-1;col++){
            cout<<" ";
        }
        // stars
         for(int col=0;col<row+1;col++){
            cout<<"*";
        }
        cout<<endl;
    }
}