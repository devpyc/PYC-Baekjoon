#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int q;
    cin >> q;

    priority_queue<ll> l;
    priority_queue<ll, vector<ll>, greater<ll>> r;
    
    ll sl = 0, sr = 0;
    ll base = 0;

    while(q--){
        int tt;
        cin >> tt;
        if(tt == 1){
            ll x, y;
            cin >> x >> y;
            base += y;

            if(l.empty()){
                l.push(x);
                sl += x;
            } else {
                ll m = l.top();
                if(x <= m){
                    l.push(x);
                    sl += x;
                } else {
                    r.push(x);
                    sr += x;
                }
            }
            if(l.size() > r.size() + 1){
                ll tmp = l.top();
                l.pop();
                sl -= tmp;
                r.push(tmp);
                sr += tmp;
            } else if(l.size() < r.size()){
                ll temp = r.top();
                r.pop();
                sr -= temp;
                l.push(temp);
                sl += temp;
            }
        } else if(tt == 2){
            ll m = l.top();
            ll res = m * l.size() - sl + sr - m * r.size();
            ll ans = base + res;
            cout << m << " " << ans << "\n";
        }
    }
}
