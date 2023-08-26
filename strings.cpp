#include<iostream>
#include<vector>
#include<limits.h>
#include<set>
#include<string.h>
#include<algorithm>
using namespace std;
int main()
{
    // string str;
    // cin>>str;
    // cout<<str<<endl;
    // cout<<str.substr(0,6);

    string str1="abcd";
    
    string str2="abbd";

    cout<<str1.compare(str2);
    

    // for(int i=0;i<str1.length();i++){
    //     for(int j=0;j<str2.length();j++){
    //         if(str1[i]==str2[j]){
    //             i++;
    //             j++;
    //         }
    //         else{
    //             cout<<"Not Same";
    //         }
    //     }
    // }
 return 0;
}