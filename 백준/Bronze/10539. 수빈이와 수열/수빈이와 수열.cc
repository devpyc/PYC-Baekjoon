#include <bits/stdc++.h>
using namespace std;
int main() {
    cin.tie(0)->sync_with_stdio(0);
    int n;
    cin>>n;

    vector<long long>arr(n);
    vector<long long>sum(n),dp(n);
    for(int i=0; i<n; i++) {
        cin>>arr[i];
    }
    for(int i=0; i<n; i++) {
        dp[i]=arr[i]*(i+1);
        if(i==0) sum[i]=dp[i];
        else sum[i]=dp[i]-dp[i-1];
    }
    for(int i=0; i<n; i++) {
        cout<<sum[i]<<" ";
    }
}