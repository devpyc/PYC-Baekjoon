#include <bits/stdc++.h>
#define INF 1'000'000'000
using namespace std;

int main() {
    cin.tie(0)->sync_with_stdio(0);

    string s;
    cin>>s;

    int n=(int)s.size();
    string sub=" "+s;

    vector<vector<char>>check(n+1,vector<char>(n+1,0));

    for (int i=1; i<=n; ++i) {
        for (int j=1; j+i-1<=n; ++j) {
            int k=i+j-1;
            if (sub[j]==sub[k]) {
                if (i<=2) check[j][k]=1;
                else check[j][k]=check[j+1][k-1];
            }
        }
    }

    vector<int>dp(n+1,INF);
    dp[0]=0;

    for (int i=1; i<=n; ++i) {
        for (int j=1; j<=i; ++j) {
            if (check[j][i]) dp[i]=min(dp[i],dp[j-1]+1);
        }
    }
    cout<<dp[n]<<"\n";
}