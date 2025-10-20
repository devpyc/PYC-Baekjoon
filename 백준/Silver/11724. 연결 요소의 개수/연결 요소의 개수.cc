#include <bits/stdc++.h>
using namespace std;

vector<int>graph[1001];
bool visited[1001];
int cnt=0;

void dfs(int x) {
    visited[x]=true;
    for (int i:graph[x]) {
        if (!visited[i]) {
            dfs(i);
        }
    }
}

int main() {
    cin.tie(0)->sync_with_stdio(0);

    int n,m,u,v;
    cin>>n>>m;
    for (int i=1; i<=m; i++) {
        cin>>u>>v;
        graph[u].push_back(v);
        graph[v].push_back(u);
    }

    for (int i=1; i<=n; i++) {
        if (visited[i]==false) {
            dfs(i);
            cnt++;
        }
    }
    cout<<cnt;
}