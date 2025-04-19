#include <bits/stdc++.h>
#define MAX 101
using namespace std;

bool visited[MAX];
vector<int>graph[MAX];

int bfs(int x) {
    int cnt=0;
    queue<int>q;
    q.push(x);
    visited[x]=true;

    while(!q.empty()) {
        int x=q.front();
        q.pop();
        cnt++;

        for(int i=0; i<graph[x].size(); i++) {
            int y=graph[x][i];
            if(!visited[y]) {
                q.push(y);
                visited[y]=true;
            }
        }
    }
    return cnt -1;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int n,m;
    cin>>n>>m;

    for(int i=0; i<m; i++) {
        int a,b;
        cin>>a>>b;
        graph[a].push_back(b);
        graph[b].push_back(a);
    }
    cout<<bfs(1);
}