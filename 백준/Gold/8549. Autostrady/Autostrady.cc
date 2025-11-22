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
        int a,b,c;
        cin>>a>>b>>c;
        arr.emplace_back(a,b,c);
    }

    sort(arr.begin(),arr.end());
    int ans=0,cnt=0;
    for (auto i:arr) {
        if (!same(i.u,i.v)) {
            unite(i.u,i.v);
            ans+=i.w;
            cnt=max(cnt,i.w);
        }
    }
    cout<<cnt;
}