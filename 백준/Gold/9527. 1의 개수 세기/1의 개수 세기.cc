#include <bits/stdc++.h>
#define ll long long
using namespace std;

ll solve(ll n) {
    ll res=0;
    for (ll i=1; i<=n; i<<=1)
        res+=(n+1)/(i<<1)*i+max(0LL,(n+1)%(i<<1)-i);
    return res;
}

int main() {
    cin.tie(0)->sync_with_stdio(0);

    ll a,b;
    cin>>a>>b;
    cout<<solve(b)-solve(a-1);
}