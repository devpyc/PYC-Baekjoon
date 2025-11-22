#include <bits/stdc++.h>
using namespace std;

const int INF = 1e9;
int main() {
    cin.tie(0)->sync_with_stdio(0);

    int n,m,r;
    cin >> n >> m >> r;

    vector<int> items(n+1);
    for(int i=1;i<=n;i++) cin >> items[i];

    vector<vector<pair<int,int>>> graph(n+1);
    for(int i=0;i<r;i++){
        int a,b,l;
        cin >> a >> b >> l;
        graph[a].push_back({b,l});
        graph[b].push_back({a,l});
    }

    int ans = 0;

    for(int start=1; start<=n; start++){
        vector<int> dist(n+1, INF);
        priority_queue<pair<int,int>, vector<pair<int,int>>, greater<>> pq;

        dist[start] = 0;
        pq.push({0, start});

        while(!pq.empty()){
            auto [d, u] = pq.top();
            pq.pop();
            if(d > dist[u]) continue;

            for(auto &[v, w] : graph[u]){
                if(dist[v] > dist[u] + w){
                    dist[v] = dist[u] + w;
                    pq.push({dist[v], v});
                }
            }
        }

        int sum = 0;
        for(int i=1; i<=n; i++){
            if(dist[i] <= m) sum += items[i];
        }
        ans = max(ans, sum);
    }
    cout << ans;
}