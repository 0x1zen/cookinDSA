#include<iostream>
#include<vector>
#include<limits.h>
#include<algorithm>
using namespace std;
int main()
{ 
    vector<int>v{1,2,3,5,7,7,7,7,7,7};
    int target=7;
    auto ans=lower_bound(v.begin(),v.end(),target);
    cout<<ans-v.begin();
 return 0;
}