#include <bits/stdc++.h>
using namespace std;

vector<int>graph[100001];
bool visited[100001];

void dfs(int x) {
    visited[x]=true;
    cout<<x<<" ";

    for (int i:graph[x]) {
        if (!visited[i]) {
            dfs(i);
        }
    }
}

void bfs(int start) {
    queue<int>q;
    q.push(start);
    visited[start]=true;

    while (!q.empty()) {
        int x=q.front();
        q.pop();
        cout<<x<<" ";

        for (int i:graph[x]) {
            if (!visited[i]) {
                q.push(i);
                visited[i]=true;
            }
        }
    }
}

int main() {
    cin.tie(0)->sync_with_stdio(0);

    int n,m,r,u,v;
    cin>>n>>m>>r;
    for (int i=0; i<m; i++) {
        cin>>u>>v;
        graph[u].push_back(v);
        graph[v].push_back(u);
    }
    for (int i=1; i<=n; i++) {
        sort(graph[i].begin(),graph[i].end());
    }
    dfs(r);
    memset(visited,false,sizeof(visited));
    cout<<"\n";
    bfs(r);
}