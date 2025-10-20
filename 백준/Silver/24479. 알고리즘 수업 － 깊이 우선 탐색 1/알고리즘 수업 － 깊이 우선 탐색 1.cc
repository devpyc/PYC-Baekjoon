#include <bits/stdc++.h>
using namespace std;

vector<int>graph[100001];
bool visited[100001];
int ans[100001];
int cnt=0;

void dfs(int x) {
    ans[x]=++cnt;
    visited[x]=true;
    for (int i:graph[x]) {
        if (!visited[i]) {
            dfs(i);
        }
    }
}

int main() {
    cin.tie(0)->sync_with_stdio(0);

    int n,m,r;
    cin>>n>>m>>r;
    for (int i=0; i<m; i++) {
        int u,v;
        cin>>u>>v;
        graph[u].push_back(v);
        graph[v].push_back(u);
    }
    for (int i=1; i<=n; i++) {
        sort(graph[i].begin(),graph[i].end());
    }
    dfs(r);
    for (int i=1; i<=n; i++) {
        cout<<ans[i]<<"\n";
    }
}