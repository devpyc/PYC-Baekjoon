#include <bits/stdc++.h>
#define MOD 1'000'000'007
using namespace std;

long long dp[51]={1,1,};

int main() {
    int n;
    cin>>n;

    for(int i=2; i<=n; i++) {
        dp[i]=dp[i-1]+dp[i-2]+1;
    }
    cout<<dp[n]%MOD;
}