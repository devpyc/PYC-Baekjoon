#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int n,m;
    cin>>n>>m;

    priority_queue<long long, vector<long long>,greater<long long>>pq;
    for(int i=0; i<n; i++) {
        long long a;
        cin>>a;
        pq.push(a);
    }

    for(int i=0; i<m; i++) {
        long long x=pq.top(); pq.pop();
        long long y=pq.top(); pq.pop();
        long long z=x+y;
        pq.push(z);
        pq.push(z);
    }
    long long ans=0;
    while(!pq.empty()) {
        ans+=pq.top();
        pq.pop();
    }
    cout<<ans;
}