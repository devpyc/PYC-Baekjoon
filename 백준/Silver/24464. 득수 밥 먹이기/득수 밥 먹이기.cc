#include<bits/stdc++.h>
#define MOD 1'000'000'007
using namespace std;
int main() {
    int n;
    cin>>n;

    vector<vector<int>>dp(2,vector<int>(5));

    for (int i=0; i<=4; ++i) {
        dp[1][i]=1;
    }
    for (int i=2; i<=n; ++i) {
        int r=i%2,l=1-r;
        fill(dp[r].begin(),dp[r].end(),0);

        for (int j=1; j<=4; ++j) {
            dp[r][0]=(dp[r][0]+dp[l][j])%MOD;
        }
        for (int j=1; j<=4; ++j) {
            dp[r][j]=dp[l][0];
            for (int k=1; k<=4; ++k) {
                if (k==j||abs(k-j)==1) continue;
                dp[r][j]=(dp[r][j]+dp[l][k])%MOD;
            }
        }
    }
    int ans=0,res=n%2;
    for (int i=0; i<=4; ++i) {
        ans=(ans+dp[res][i])%MOD;
    }
    cout<<ans;
}