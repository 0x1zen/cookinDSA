#include<iostream>
#include<vector>
#include<limits.h>
#include<set>
#include<string.h>
#include<algorithm>
using namespace std;
string removeOccurances(string s,string part){
    int position=s.find(part);

    while(position!=string::npos){
        s.erase(position,part.length());
        position=s.find(part);
    }
    return s;
}
int main()
{
    string s="daabcbaabcbc";
    string part="abc";
    // cout<<s.find(part);
    string ans=removeOccurances(s,part);
    cout<<ans;
 return 0;
}