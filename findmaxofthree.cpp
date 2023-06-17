#include<iostream>
using namespace std;
int max(int a,int b,int c){
    if(a>b &&a>c){
        cout<<"The max is a:"<<a;
    }
    else if(b>a && b>c){
        cout<<"The max is b:"<<b;
    }
    else{
        cout<<"The max is c:"<<c;
    };
}
int main()
{
    int a,b,c;
    cout<<"Enter Value Of a:";
    cin>>a;
    cout<<"Enter Value Of b:";
    cin>>b;
    cout<<"Enter Value Of c:";
    cin>>c;
    max(a,b,c);

 return 0;
}