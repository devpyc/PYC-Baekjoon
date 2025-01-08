#include <bits/stdc++.h>
#define ll long long
using namespace std;

static const ll INF = LLONG_MAX / 4;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, m, k;
    cin >> n >> m >> k;

    vector<vector<pair<int,ll>>> adj(n);

    for(int i=0; i<m; i++){
        int a, b;
        ll c;
        cin >> a >> b >> c;

        adj[a].push_back({b,c});
        adj[b].push_back({a,c});
    }

    vector<int> escape(k);
    for(int i=0; i<k; i++){
        cin >> escape[i];
    }

    vector<ll> dp(n, INF);

    for(int e : escape){
        dp[e] = 0;
    }

    vector<ll> best1(n, INF), best2(n, INF);

    priority_queue<pair<ll,int>, vector<pair<ll,int>>, greater<>> pq;

    for(int e : escape){
        for(auto &nx : adj[e]){
            int u = nx.first;
            ll cost = nx.second;
            ll cand = dp[e] + cost;

            if(cand < best1[u]){
                best2[u] = best1[u];
                best1[u] = cand;
            } else if(cand < best2[u]){
                best2[u] = cand;
            }
        }
    }

    for(int i=0; i<n; i++){
        if(best2[i] < INF){
            dp[i] = best2[i];
            pq.push({dp[i], i});
        }
    }

    while(!pq.empty()){
        auto [curDist, u] = pq.top();
        pq.pop();

        if(dp[u] != curDist) continue;

        for(auto &nx : adj[u]){
            int v = nx.first;
            ll c = nx.second;
            ll cand = dp[u] + c;

            if(cand < best1[v]){
                best2[v] = best1[v];
                best1[v] = cand;
            } else if(cand < best2[v]){
                best2[v] = cand;
            }

            ll newDpV = best2[v];

            if(newDpV < dp[v]){
                dp[v] = newDpV;
                pq.push({dp[v], v});
            }
        }
    }

    cout << dp[0] << "\n";

    return 0;
}