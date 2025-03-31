#include <bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    long long dp[36]={1};
    int n;
    cin>>n;

    for(int i=1; i<=n; i++) {
        for(int j=1; j<=i; j++) {
            dp[i]+=dp[j-1]*dp[i-j];
        }
    }
    cout<<dp[n];
}