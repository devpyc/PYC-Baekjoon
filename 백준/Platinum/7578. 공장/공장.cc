#include <bits/stdc++.h>
#define ll long long
#define MAX_N 500001
using namespace std;

class FenwickTree {
private:
    vector<ll> tree;
    ll size;

public:
    FenwickTree(ll n) : size(n) {
        tree.resize(n + 1, 0);
    }

    void update(ll idx, ll val) {
        while (idx <= size) {
            tree[idx] += val;
            idx += (idx & -idx);
        }
    }

    int query(ll idx) {
        ll sum = 0;
        while (idx > 0) {
            sum += tree[idx];
            idx -= (idx & -idx);
        }
        return sum;
    }
};

int main() {
    cin.tie(0)->sync_with_stdio(0);

    ll n;
    cin >> n;
    vector<ll> a(n + 1), b(n + 1);
    map<ll, ll> arr;

    for (ll i = 1; i <= n; i++) {
        cin >> a[i];
    }
    for (ll i = 1; i <= n; i++) {
        cin >> b[i];
        arr[b[i]] = i;
    }

    FenwickTree tree(n);
    ll ans = 0;

    for (ll i = 1; i <= n; i++) {
        ll pos = arr[a[i]];
        ans += i - 1 - tree.query(pos);
        tree.update(pos, 1);
    }
    cout << ans << "\n";
}