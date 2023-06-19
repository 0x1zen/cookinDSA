#include<iostream>
using namespace std;
string evenOdd(int num){
    if(num%2==0){
        return "Even";
    }
    else{
        return "odd";
    }
}
int main()
{
    int num;
    cin>>num;
    string ans=evenOdd(num);
    cout<<"The Number Is "<<ans<<endl;
 return 0;
}