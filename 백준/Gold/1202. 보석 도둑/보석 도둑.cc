#include <bits/stdc++.h>
using namespace std;

int main() {
    cin.tie(0)->sync_with_stdio(0);

    int n,k;
    cin>>n>>k;
    priority_queue<pair<int,int>,vector<pair<int,int>>,greater<>>pq;
    for (int i=0; i<n; i++) {
        int m,v;
        cin>>m>>v;
        pq.push({m,v});
    }

    priority_queue<int,vector<int>,greater<>>c;
    for (int i=0; i<k; i++) {
        int x;
        cin>>x;
        c.push(x);
    }

    long long sum=0;
    priority_queue<int>q;
    while (!c.empty()) {
        int x=c.top();
        c.pop();

        while (!pq.empty()&&pq.top().first<=x) {
            q.push(pq.top().second);
            pq.pop();
        }
        if (!q.empty()) {
            sum+=q.top();
            q.pop();
        }
    }
    cout<<sum;
}