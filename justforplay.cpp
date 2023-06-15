#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    for(int r=0;r<n;r++){
        for(int c=0;c<n;c++){
            cout<<"*";
        }
        cout<<endl;
    }
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