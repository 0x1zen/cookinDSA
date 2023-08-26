#include<iostream>
#include<vector>
#include<limits.h>
#include<set>
#include<string.h>
#include<algorithm>
using namespace std;
  string removeDuplicates(string s) {
        string ans="";
        int i=0;
        while(i<s.length() ){
           if(ans.length()>0){
             if( ans[ans.length()-1]==s[i] ){
                
                ans.pop_back();
                
            }
            else{
                ans.push_back(s[i]);
                // cout<<ans<<endl;
            }
           }
           else{
                ans.push_back(s[i]);
           }
              i++;
        }
        return ans;
    }
int main()
{
 string s="abbaca";
 string ans=removeDuplicates(s);
 cout<<ans;
 return 0;
}