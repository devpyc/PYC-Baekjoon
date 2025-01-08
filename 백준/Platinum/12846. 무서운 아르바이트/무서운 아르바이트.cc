#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;
    vector<ll> T(n+2, 0);

    for(int i=1; i<=n; i++){
        cin >> T[i];
    }

    stack<int> s;
    ll ans = 0;

    for(int i=1; i<=n+1; i++){
        while(!s.empty() && T[s.top()] > T[i]){
            ll h = T[s.top()];
            s.pop();

            int l = (s.empty() ? 1 : s.top()+1);
            int r = i - 1;
            ll w = (long long)(r - l + 1);
            ll a = h * w;
            ans = max(ans, a);
        }
        s.push(i);
    }

    cout << ans << "\n";
    return 0;
}