#include <bits/stdc++.h>
using namespace std;

vector<int>parent;

int find(int x) {
    if (parent[x]==x) return x;
    else return parent[x]=find(parent[x]);
}

void unite(int a, int b) {
    a=find(a);
    b=find(b);
    if (a!=b) parent[b]=a;
}

bool same(int a, int b) {
    return find(a)==find(b);
}

class Edge {
public:
    int first;
    int second;
    int dist;
    Edge(int a, int b, int c) {
        first=a;
        second=b;
        dist=c;
    }
    bool operator<(const Edge &edge) const {
        return dist<edge.dist;
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

    vector<Edge>v;
    v.reserve(m);

    for (int i=0; i<m; i++) {
        int a,b,c;
        cin>>a>>b>>c;
        v.emplace_back(a,b,c);
    }

    sort(v.begin(),v.end());
    vector<Edge>mst;
    int ans=0;
    for (auto &edge:v) {
        if (!same(edge.first,edge.second)) {
            unite(edge.first,edge.second);
            mst.push_back(edge);
            ans+=edge.dist;
        }
    }
    cout<<ans;
}