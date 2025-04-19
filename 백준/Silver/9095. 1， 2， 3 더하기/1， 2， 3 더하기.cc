#include <bits/stdc++.h>
using namespace std;

int dp[11]={0,1,2,4};

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin>>t;
    for(int i=4; i<11; i++) {
        dp[i]=dp[i-1]+dp[i-2]+dp[i-3];
    }
    while(t--) {
        int x;
        cin>>x;
        cout<<dp[x]<<"\n";
    }
}