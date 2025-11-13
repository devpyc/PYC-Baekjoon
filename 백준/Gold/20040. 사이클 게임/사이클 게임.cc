#include <bits/stdc++.h>
using namespace std;

vector<int>parent;

int find(int x) {
    if (parent[x]==x) {
        return x;
    }else {
        return parent[x]=find(parent[x]);
    }
}

void unite(int a, int b) {
    a=find(a);
    b=find(b);
    if (a!=b) parent[b]=a;
}

bool same(int a, int b) {
    return find(a)==find(b);
}

int main() {
    cin.tie(0)->sync_with_stdio(0);

    int n,m;
    cin>>n>>m;
    parent.resize(n+1);
    for (int i=1; i<=n; i++) {
        parent[i]=i;
    }

    bool check=false;
    for (int i=1; i<=m; i++) {
        int u,v;
        cin>>u>>v;
        if (same(u,v)) {
            cout<<i;
            return 0;
        }
        unite(u,v);
    }
    cout<<0;
}