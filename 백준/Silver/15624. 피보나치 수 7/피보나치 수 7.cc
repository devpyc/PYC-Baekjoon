#include <bits/stdc++.h>
#define MOD 1'000'000'007
using namespace std;

long long dp[1000001]={0,1,1};

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin>>n;

    for(int i=3; i<n+1; i++) {
        dp[i]=(dp[i-1]+dp[i-2])%MOD;
    }

    cout<<dp[n];
}