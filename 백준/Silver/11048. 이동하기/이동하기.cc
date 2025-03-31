#include <bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int n,m;
    cin>>n>>m;
    int arr[1001][1001],dp[1001][1001];
    for(int i=1; i<=n; i++) {
        for(int j=1; j<=m; j++) {
            cin>>arr[i][j];
            dp[i][j]=arr[i][j];
        }
    }
    for(int i=1; i<=n; i++) {
        for(int j=1; j<=m; j++) {
            dp[i][j]=arr[i][j]+max(dp[i-1][j-1],max(dp[i-1][j],dp[i][j-1]));
        }
    }
    cout<<dp[n][m];
}