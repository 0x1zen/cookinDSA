#include<iostream>
using namespace std;
float area(float radius){
    float pi=3.14;
    float areaOfCircle=pi*radius*radius;
    return float(areaOfCircle);
}
int main()
{
    float radius;
    cin>>radius;
    float ans=area(radius);
    cout<<"The area of circle is "<<ans<<endl;
 return 0;
}