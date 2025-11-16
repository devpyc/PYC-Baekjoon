#include <bits/stdc++.h>
using namespace std;

vector<int>parent;

int find(int x) {
    if (parent[x]==x) return x;
    else return parent[x]=find(parent[x]);
}

void unite(int x, int y) {
    x=find(x);
    y=find(y);
    if (x!=y) parent[y]=x;
}

bool same(int x, int y) {
    return find(x)==find(y);
}

class Edge {
public:
    int u,v,w;
    Edge(int u, int v, int w) :u(u),v(v),w(w){}

    bool operator<(const Edge &W) const {
        return w>W.w;
    }
};

int main() {
    cin.tie(0)->sync_with_stdio(0);

    int n,m;
    cin>>n>>m;

    vector<Edge>arr;
    arr.reserve(m);

    for (int i=0; i<m; i++) {
        int a,b,c;
        cin>>a>>b>>c;
        arr.emplace_back(a,b,c);
    }

    int x,y;
    cin>>x>>y;

    parent.resize(n+1);
    for (int i=1; i<=n; i++) {
        parent[i]=i;
    }

    sort(arr.begin(),arr.end());

    for (auto &i:arr) {
        unite(i.u,i.v);
        if (same(x,y)) {
            cout<<i.w<<"\n";
            return 0;
        }
    }
}