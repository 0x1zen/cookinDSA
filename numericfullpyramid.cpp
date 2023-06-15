#include<iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    for(int row=0;row<n;row++){
        // spaces
        for(int col=0;col<n-row-1;col++){
            cout<<" ";
        }
        // numbers
        for(int col=0;col<row+1;col++){
            cout<<row+col+1;
        }
        // reverse couting
        int dec=2*row;
        for(int col=0;col<row;col++){
        
        cout<<dec;
        dec=dec-1;
        }
        cout<<endl;
    }
 return 0;
}