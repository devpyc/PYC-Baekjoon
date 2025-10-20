#include <bits/stdc++.h>
using namespace std;

vector<int>graph[100001];
bool visited[100001];
int arr[100001];

void dfs(int x) {
    visited[x]=true;
    for (int i:graph[x]) {
        if (!visited[i]) {
            arr[i]=x;
            dfs(i);
        }
    }
}

int main() {
    cin.tie(0)->sync_with_stdio(0);

    int n,u,v;
    cin>>n;
    for (int i=1; i<=n-1; i++) {
        cin>>u>>v;
        graph[u].push_back(v);
        graph[v].push_back(u);
    }
    dfs(1);
    for (int i=2; i<=n; i++) {
        cout<<arr[i]<<"\n";
    }
}