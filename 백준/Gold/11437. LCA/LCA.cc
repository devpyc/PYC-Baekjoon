#include <bits/stdc++.h>
#define MAX 50001
using namespace std;

int parent[MAX];
int depth[MAX];
vector<int>graph[MAX];

void dfs(int node, int p, int d) {
    parent[node]=p;
    depth[node]=d;
    for (int i:graph[node]) {
        if (i!=p) dfs(i,node,d+1);
    }
}

int lca(int a, int b) {
    while (depth[a]>depth[b]) a=parent[a];
    while (depth[b]>depth[a]) b=parent[b];

    while (a!=b) {
        a=parent[a];
        b=parent[b];
    }
    return a;
}

int main() {
    cin.tie(0)->sync_with_stdio(0);

    int n;
    cin>>n;

    for (int i=0; i<n-1; i++) {
        int a,b;
        cin>>a>>b;
        graph[a].push_back(b);
        graph[b].push_back(a);
    }
    dfs(1,0,0);

    int m;
    cin>>m;
    while (m--) {
        int a,b;
        cin>>a>>b;
        cout<<lca(a,b)<<"\n";
    }
}