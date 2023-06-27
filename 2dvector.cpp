#include<iostream>
#include<vector>
using namespace std;
int main()
{
    // vector<vector<int> >arr;
    // vector<int>a{1,2,3};
    // vector<int>b{4,5,6};
    // vector<int>c{7,8,9};
    // arr.push_back(a);
    // arr.push_back(b);
    // arr.push_back(c);
    // for(int i=0;i<arr.size();i++){
    //     for(int j=0;j<arr[i].size();j++){
    //         cout<<arr[i][j];
    //     }
    //     cout<<endl;
    // }

    // vector<vector<int> >arr(5,vector<int>(5,-8));
    vector<vector<int> >arr(5,vector<int>(5,7));
     for(int i=0;i<arr.size();i++){
        for(int j=0;j<arr[i].size();j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
    cout<<arr[2][3];
    cout<<endl;
    cin>>arr[3][4];
    //  for(int i=0;i<arr.size();i++){
    //     for(int j=0;j<arr[i].size();j++){
    //         cout<<arr[i][j]<<" ";
    //     }
    //     cout<<endl;
    // }
      for(int i=0;i<arr[i].size();i++){
        for(int j=0;j<arr.size();j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }


 return 0;
}