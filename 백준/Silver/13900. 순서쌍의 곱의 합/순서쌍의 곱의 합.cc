#include <bits/stdc++.h>
#define ll long long
#define MOD 1'000'000'000
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin>>n;
    vector<long long>arr(n);
    vector<long long>sum(n+1,0);
    for(int i=0; i<n; i++) {
        cin>>arr[i];
        sum[i+1]=sum[i]+arr[i];
    }

    long long ans=0;
    for(int i=0; i<n-1; i++) {
        ans+=arr[i]*(sum[n]-sum[i+1]);
    }
    cout<<ans;
}