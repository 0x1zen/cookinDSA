#include<iostream>
#include<vector>
#include<limits.h>
#include<set>
#include<string.h>
#include<algorithm>
using namespace std;
void upperCase(char a[],int size){
    for(int i=0;i<size;i++){
        a[i]=a[i]-'a'+'A';
    }
}
int main()
{
    char a[50]="dubal";
    int size=strlen(a);
    upperCase(a,size);
    cout<<a;
 return 0;
}