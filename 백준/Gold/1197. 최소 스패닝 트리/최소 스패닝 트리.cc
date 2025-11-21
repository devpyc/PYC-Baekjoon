#include <bits/stdc++.h>
using namespace std;

vector<int>parent;

int Find(int x) {
    if (parent[x]==x) return x;
    else return parent[x]=Find(parent[x]);
}

void Union(int x, int y) {
    x=Find(x);
    y=Find(y);
    if (x!=y) parent[y]=x;
}

bool same(int x, int y) {
    return Find(x)==Find(y);
}

class Edge {
public:
    int u,v,w;
    Edge(int u, int v, int w) :u(u),w(w),v(v){}

    bool operator<(const Edge &edge) const {
        return w<edge.w;
    }
};

int main() {
    cin.tie(0)->sync_with_stdio(0);

    int n,m;
    cin>>n>>m;

    parent.resize(n+1);
    for (int i=1; i<=n; i++) {
        parent[i]=i;
    }

    vector<Edge>arr;

    while (m--) {
        int u,v,w;
        cin>>u>>v>>w;
        arr.emplace_back(u,v,w);
    }

    sort(arr.begin(),arr.end());

    int ans=0;

    for (auto i:arr) {
        if (!same(i.u,i.v)) {
            Union(i.u,i.v);
            ans+=i.w;
        }
    }
    cout<<ans;
}