#include <bits/stdc++.h>
#define ll long long
using namespace std;

ll gcd(ll a, ll b) {
    if(b==0) return a;
    return gcd(b,a%b);
}

ll lcm(ll a, ll b) {
    return a*b/gcd(a,b);
}
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    ll a,b;
    cin>>a>>b;

    cout<<lcm(a,b);
}