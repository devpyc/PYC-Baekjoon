#include <bits/stdc++.h>
using namespace std;

int main(){
    cin.tie(0)->sync_with_stdio(0);

    int n;
    cin>>n;
    long long dp[46]={0,1};
    for (int i=2; i<=n; i++) {
        dp[i]=dp[i-1]+dp[i-2];
    }
    cout<<dp[n];
}