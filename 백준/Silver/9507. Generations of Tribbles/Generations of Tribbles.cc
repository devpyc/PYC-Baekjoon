#include <bits/stdc++.h>
#define ull unsigned long long
using namespace std;


int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin>>t;
    while(t--) {
        int n;
        cin>>n;
        ull dp[68]={1,1,2,4,};
        for(int i=4; i<n+1; i++) {
            dp[i]=dp[i-1]+dp[i-2]+dp[i-3]+dp[i-4];
        }
        cout<<dp[n]<<"\n";
    }
}