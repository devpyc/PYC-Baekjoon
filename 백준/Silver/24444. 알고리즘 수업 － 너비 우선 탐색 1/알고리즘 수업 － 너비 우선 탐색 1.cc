#include <bits/stdc++.h>
using namespace std;

vector<int>graph[100001];
bool visited[100001];
int ans[100001];

void bfs(int start) {
    queue<int>q;
    q.push(start);
    visited[start]=true;
    int cnt=1;
    ans[start]=cnt;

    while (!q.empty()) {
        int x=q.front();
        q.pop();

        for (int i:graph[x]) {
            if (!visited[i]) {
                q.push(i);
                visited[i]=true;
                ans[i]=++cnt;
            }
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
    bfs(r);
    for (int i=1; i<=n; i++) {
        cout<<ans[i]<<"\n";
    }
}