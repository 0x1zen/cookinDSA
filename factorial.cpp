#include<iostream>
using namespace std;
int factorial(int num){
    int result=1;
for(int i=num;i>=1;i--){
    result=result*i;
    
}
return result;
}
int main()
{
    int num;
    cin>>num;
    int ans=factorial(num);
    cout<<"The factorial of given number is"<<ans<<endl;
 return 0;
}