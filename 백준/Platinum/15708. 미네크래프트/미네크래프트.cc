#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main() {
    cin.tie(0)->sync_with_stdio(0);

    ll n,t,p;
    cin>>n>>t>>p;

    vector<ll>k(n);
    for (int i=0; i<=n; i++) {
        cin>>k[i];
    }

    priority_queue<ll>pq;
    ll sum=0,ans=0;

    for (int i=0; i<n; i++) {
        ll s=t-1LL*p*i;
        if (s<0) break;

        pq.push(k[i]);
        sum+=k[i];

        while (!pq.empty()&&sum>s) {
            sum-=pq.top();
            pq.pop();
        }

        ans=max(ans,(ll)pq.size());
    }
    cout<<ans;
}