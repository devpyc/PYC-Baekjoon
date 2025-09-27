#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main() {
    cin.tie(0)->sync_with_stdio(0);

    ll n;
    cin>>n;

    vector<ll>ans;

    for (ll i=1; i*i<=n; i++) {
        if (n%i==0) {
            ll m=n/i;

            if (i<m) {
                if ((i+m)%2==0&&(m-i)%2==0) {
                    ll x=(i+m)/2,y=(m-i)/2;
                    if (y>0) ans.push_back(x);
                }
            }
        }
    }
    sort(ans.begin(),ans.end());
    
    if (ans.empty()) cout<<-1<<"\n";
    else {
        for (auto i:ans) {
            cout<<i<<"\n";
        }
    }
}