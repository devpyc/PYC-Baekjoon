#include <bits/stdc++.h>
#define INF INT_MAX
using namespace std;

int n,m;
long long dist[501];
bool check;
vector<pair<int,int>>v[501];

void solve() {
    for (int i=1; i<=n; ++i) {
        dist[i]=INF;
    }
    dist[1]=0;
    check=false;

    for (int i=1; i<=n; ++i) {
        for (int j=1; j<=n; ++j) {
            for (int k=0; k<v[j].size(); ++k) {
                int next=v[j][k].first;
                int cost=v[j][k].second;
                if (dist[j]!=INF&&dist[next]>dist[j]+cost) {
                    dist[next]=dist[j]+cost;
                    if (i==n) check=true;
                }
            }
        }
    }
    if (check) {
        cout<<-1<<"\n";
    }
    else {
        for (int i=2; i<=n; ++i) {
            cout<<(dist[i]!=INF?dist[i]:-1)<<"\n";
        }
    }
}

int main() {
    cin.tie(0)->sync_with_stdio(0);

    cin>>n>>m;
    for (int i=0; i<m; ++i) {
        int a,b,c;
        cin>>a>>b>>c;
        v[a].push_back({b,c});
    }
    solve();
}