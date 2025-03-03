#include <bits/stdc++.h>
#define ll long long
using namespace std;

int t,p,q;
ll dp[10001]={0,1,1};

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    cin>>t;

    for(int i=1; i<t+1; i++) {
        cin>>p>>q;
        for(int j=3; j<p+1; j++) {
            dp[j]=dp[j-1]+dp[j-2]%q;
        }
        cout<<"Case #"<<i<<": "<<dp[p]%q<<"\n";
    }
}