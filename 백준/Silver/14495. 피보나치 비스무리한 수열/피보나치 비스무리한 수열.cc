#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int n;
    cin>>n;
    long long dp[n+1];
    dp[1]=1,dp[2]=1,dp[3]=1;
    for(int i=4; i<n+1; i++) {
        dp[i]=dp[i-1]+dp[i-3];
    }
    cout<<dp[n];
}