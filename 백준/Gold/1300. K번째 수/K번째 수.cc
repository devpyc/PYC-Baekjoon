#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    ll n,x;
    cin>>n>>x;

    ll l=1,r=n*n;
    ll ans=0;

    while(l<=r) {
        ll mid=(l+r)/2;
        ll cnt=0;

        for(int i=1; i<=n; i++) {
            cnt+=min(n,mid/i);
        }
        if(cnt>=x) {
            ans=mid;
            r=mid-1;
        }else {
            l=mid+1;
        }
    }
    cout<<ans;
}