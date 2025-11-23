#include <bits/stdc++.h>
#define ll long long
using namespace std;

ll a,b,c;
ll llpow(ll a, ll b) {
    if (b==0) return 1;
    ll res=llpow(a,b/2),ans=(res*res)%c;
    if (b%2==1) ans=(ans*a)%c;
    return ans;
}

int main() {
    cin.tie(0)->sync_with_stdio(0);

    cin>>a>>b>>c;
    cout<<llpow(a%c,b);
}