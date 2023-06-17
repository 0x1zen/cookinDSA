#include<iostream>
using namespace std;
int getSumOfEven(int n){
    int sum=0;
    for(int i=2;i<=n;i=i+2){
    sum=sum+i;
    }
    return sum;
}
int main()
{
    int n;
    cin>>n;
    int ans=getSumOfEven(n);
    cout<<"Sum of Even Numbers is: "<<ans<<endl;
 return 0;
}