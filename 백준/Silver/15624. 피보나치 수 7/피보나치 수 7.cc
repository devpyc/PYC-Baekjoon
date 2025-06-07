#include <bits/stdc++.h>
#define MOD 1'000'000'007
using namespace std;

long long dp[1000001]={0,1};

int main() {
    cin.tie(0)->sync_with_stdio(0);

    int n;
    cin>>n;
    for(int i=2; i<=n; i++) {
        dp[i]=(dp[i-1]+dp[i-2])%MOD;
    }
    cout<<dp[n];
}