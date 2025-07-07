#include <bits/stdc++.h>
#define ll int64_t
using namespace std;

ll llgcd(ll a, ll b) {
    while (b) {
        a%=b;
        swap(a,b);
    }
    return a;
}

int main() {
    cin.tie(0)->sync_with_stdio(0);

    int n;
    cin>>n;

    ll ans=1;
    for (int i=0; i<n-2; i++) {
        ll x;
        cin>>x;
        ans=ans/llgcd(ans,x)*x;
    }
    cout<<ans;
}