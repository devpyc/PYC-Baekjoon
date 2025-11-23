#include <bits/stdc++.h>
#define INF 1e9
using namespace std;

int main() {
    cin.tie(0)->sync_with_stdio(0);

    int c,n;
    cin>>c>>n;

    vector<pair<int,int>>arr(n);
    for (int i=0; i<n; i++) {
        cin>>arr[i].first>>arr[i].second;
    }

    vector<int>dp(c+101,INF);
    dp[0]=0;

    int ans=INF;
    for (int i=0; i<n; i++) {
        for (int j=arr[i].second; j<=c+100; j++) {
            dp[j]=min(dp[j],dp[j-arr[i].second]+arr[i].first);
        }
    }
    for (int i=c; i<=c+100; i++) {
        ans=min(ans,dp[i]);
    }
    cout<<ans;
}