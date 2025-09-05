#include <bits/stdc++.h>
using namespace std;

string add(string a, string b){
       string result;
       int carry = 0;
       int i = a.size() - 1;
       int j = b.size() - 1;

       while(i >= 0 || j >= 0 || carry > 0){
           int sum = carry;
           if(i >= 0) sum += a[i--] - '0';
           if(j >= 0) sum += b[j--] - '0';
           carry = sum / 10;
           sum = sum % 10;
           result += to_string(sum);
       }
       reverse(result.begin(), result.end());
       return result;
}

int main()
{
    cin.tie(0)->sync_with_stdio(0);

    int n;
    cin>>n;

    vector<string>dp(n+1);
    dp[0]="0",dp[1]="1";
    for (int i=2; i<=n; i++) {
        dp[i]=add(dp[i-1],dp[i-2]);
    }
    cout<<dp[n];
}