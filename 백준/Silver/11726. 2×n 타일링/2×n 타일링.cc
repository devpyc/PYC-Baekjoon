#include <bits/stdc++.h>
#define MOD 10007
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin>>n;
    int dp[n+1];

    dp[1]=1,dp[2]=2;
    for(int i=3; i<n+1; ++i) {
        dp[i]=(dp[i-1]+dp[i-2])%MOD;
    }
    cout<<dp[n];
}