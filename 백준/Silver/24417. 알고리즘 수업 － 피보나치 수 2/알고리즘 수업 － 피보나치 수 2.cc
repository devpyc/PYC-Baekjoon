#include <bits/stdc++.h>
#define ll long long
#define MOD 1'000'000'007
using namespace std;

pair<ll, ll> fibo(ll n) {
    if(n == 0) return {0, 1};
    auto p = fibo(n / 2);
    ll a = p.first;
    ll b = p.second;
    ll c = (a * ((2 * b % MOD - a + MOD) % MOD)) % MOD;
    ll d = ( (a * a) % MOD + (b * b) % MOD ) % MOD;
    if(n % 2 == 0)
        return {c, d};
    else
        return {d, (c + d) % MOD};
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    ll n;
    cin >> n;

    ll ans1 = fibo(n).first % MOD;
    ll ans2 = (n - 2) % MOD;

    cout << ans1 << " " << ans2;
}