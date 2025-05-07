#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, m;
    cin>>n>>m;
    vector<vector<ll>>arr(n+1,vector<ll>(n+1,-1));
    for (int i=0; i<m; i++) {
        int u,v;
        ll d;
        cin>>u>>v>>d;
        arr[u][v]=max(arr[u][v],d);
    }

    int bit=1<<n;

    vector<vector<ll>>dp(bit,vector<ll>(n,-1));

    for(int i=0; i<n; i++) {
        if(arr[0][i+1]>=0) {
            dp[1<<i][i]=arr[0][i+1];
        }
    }

    for(int i=1; i<bit; i++) {
        if((i&(i-1))==0) continue;
        for(int j=0; j<n; ++j) {
            if(!(i&(1<<j))) continue;
            int cur=i^(1<<j);
            ll res=-1;

            for (int k=0; k<n; k++) {
                if (!(cur&(1<<k))) continue;
                if (dp[cur][k]>=0&&arr[k+1][j+1]>=0) {
                    res=max(res,dp[cur][k]+arr[k+1][j+1]);
                }
            }
            dp[i][j]=res;
        }
    }

    ll ans=-1;
    for (int i = 0; i<n; i++) {
        if (dp[bit-1][i]>=0&&arr[i+1][0]>=0) {
            ans=max(ans,dp[bit-1][i]+arr[i+1][0]);
        }
    }
    cout << ans << "\n";
}