#include <bits/stdc++.h>
#define MOD 1'000'000'007
using namespace std;

int main(){
    cin.tie(0)->sync_with_stdio(0);

    int n;
    cin>>n;
    long long dp[117]={1,1,1};
    for (int i=3; i<=n; i++) {
        dp[i]=dp[i-1]+dp[i-3];
    }
    cout<<dp[n-1];
}