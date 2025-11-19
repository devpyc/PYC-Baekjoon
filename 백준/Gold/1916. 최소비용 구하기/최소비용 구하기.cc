#include <bits/stdc++.h>
using namespace std;

vector<int>dijkstra(vector<vector<pair<int,int>>>&arr, int src) {
    const int INF=1e9;
    int n=arr.size();
    vector<int>dist(n,INF);
    priority_queue<pair<int,int>,vector<pair<int,int>>,greater<>>pq;

    dist[src]=0;
    pq.emplace(0,src);

    while (!pq.empty()) {
        auto [d,u]=pq.top();
        pq.pop();
        if (d>dist[u]) continue;

        for (auto &[v,w]:arr[u]) {
            if (dist[u]+w<dist[v]) {
                dist[v]=dist[u]+w;
                pq.emplace(dist[v],v);
            }
        }
    }
    return dist;
}

int main() {
    cin.tie(0)->sync_with_stdio(0);

    int n,m;
    cin>>n>>m;

    vector<vector<pair<int,int>>>arr(n+1);

    for (int i=0; i<m; i++) {
        int a,b,c;
        cin>>a>>b>>c;
        arr[a].push_back({b,c});
    }
    int s,d;
    cin>>s>>d;
    auto dist=dijkstra(arr,s);
    cout<<dist[d];
}