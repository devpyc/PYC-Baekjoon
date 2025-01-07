#include <bits/stdc++.h>
#define ll long long
using namespace std;

struct Fenwick {
    int n;
    vector<ll> x;

    Fenwick(int n) : n(n), x(n+1, 0) {}

    void update(int idx, ll val) {
        for(; idx <= n; idx += idx & -idx) {
            x[idx] += val;
        }
    }

    ll query(int idx) {
        ll ret = 0;
        for(; idx > 0; idx -= idx & -idx) {
            ret += x[idx];
        }
        return ret;
    }
};

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, m;
    cin >> n >> m;

    vector<pair<int,int>> arr(m);
    for(int i = 0; i < m; i++){
        int a, b;
        cin >> a >> b;
        arr[i] = {a, b};
    }

    sort(arr.begin(), arr.end());

    Fenwick fw(n);

    ll ans = 0;

    for(int i = 0; i < m; ){
        int cur = arr[i].first;
        vector<int> sa;

        while(i < m && arr[i].first == cur){
            sa.push_back(arr[i].second);
            i++;
        }

        for(int B : sa){
            ans += fw.query(n) - fw.query(B);
        }

        for(int B : sa){
            fw.update(B, 1);
        }
    }

    cout << ans << "\n";
}