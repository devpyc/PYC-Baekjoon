#include <bits/stdc++.h>
using namespace std;

int main() {
    cin.tie(0)->sync_with_stdio(0);

    int n;
    cin>>n;

    unsigned long long dp[36]={0};
    dp[0]=1;
    for (int i=1; i<=n; i++) {
       for (int j=0; j<i; j++) {
           dp[i]+=dp[j]*dp[i-j-1];
       }
    }
    cout<<dp[n];
}