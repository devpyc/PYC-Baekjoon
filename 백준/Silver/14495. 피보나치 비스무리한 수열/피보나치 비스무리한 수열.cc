#include <bits/stdc++.h>
#define ll long long
using namespace std;

ll dp[117]={0,1,1,1};

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin>>n;

    for(int i=4; i<=n; i++) {
        dp[i]=dp[i-1]+dp[i-3];
    }

    cout<<dp[n];
}