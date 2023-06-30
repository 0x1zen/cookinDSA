// #include<iostream>
// #include<vector>
// #include<limits.h>
// #include<string>
// using namespace std;
// string factorial(int arr,int brr){
//   int n=sizeof(arr)/sizeof(int);
//     int m=sizeof(brr)/sizeof(int); 

//     int carry=0;
//     string ans;
//     int i=n-1;
//     int j=m-1;
//     while(i>=0 && j>=0){
//         int x=arr[i]+brr[j]+carry;
//         int digit=x%10;
//         ans.push_back[digit+ '0'];
//         carry=x/10;
//         i--;
//         j--;
//     }
//      while(i>=0){
//         int x=arr[i]+0+carry;
//         int digit=x%10;
//         ans.push_back[digit+ '0'];
//         carry=x/10;
//         i--;
        
//     }
//      while( j>=0){
//         int x=0+brr[j]+carry;
//         int digit=x%10;
//         ans.push_back[digit+ '0'];
//         carry=x/10;
        
//         j--;
//     }
//     if(carry){
//         ans.push_back(carry+'0');
//     }
//     while(ans[ans.size()-1]=='0'){
//         ans.pop_back();
//     }
//     reverse(ans.begin(),ans.end());

//     for(int i=0;i<ans.size();i++){
//         cout<<ans[i];
//     }
// }
// int main()
// {
//    int arr[]={1,2};
//    int  brr[]={2,3};
//    string factorial(arr,brr);
   
  
//  return 0;
// }
#include<iostream>
#include<vector>
#include<string>
#include<algorithm>

using namespace std;

string factorial(int arr[], int brr[], int n, int m) {
    int carry = 0;
    string ans;
    int i = n - 1;
    int j = m - 1;
    while (i >= 0 && j >= 0) {
        int x = arr[i] + brr[j] + carry;
        int digit = x % 10;
        ans.push_back(digit + '0');
        carry = x / 10;
        i--;
        j--;
    }
    while (i >= 0) {
        int x = arr[i] + 0 + carry;
        int digit = x % 10;
        ans.push_back(digit + '0');
        carry = x / 10;
        i--;
    }
    while (j >= 0) {
        int x = 0 + brr[j] + carry;
        int digit = x % 10;
        ans.push_back(digit + '0');
        carry = x / 10;
        j--;
    }
    if (carry) {
        ans.push_back(carry + '0');
    }
    while (ans[ans.size() - 1] == '0') {
        ans.pop_back();
    }
    reverse(ans.begin(), ans.end());
    return ans;
}

int main() {
    int arr[] = {0,1, 2,3};
    int brr[] = {0,2, 3};
    int n = sizeof(arr) / sizeof(arr[0]);
    int m = sizeof(brr) / sizeof(brr[0]);
    string result = factorial(arr, brr, n, m);
    cout << result << endl;
    return 0;
}
