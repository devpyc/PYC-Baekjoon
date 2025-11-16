#include <bits/stdc++.h>
using namespace std;

vector<int>parent;

int find(int x) {
    if (parent[x]==x) return x;
    else return parent[x]=find(parent[x]);
}

bool unite(int a, int b) {
    a=find(a);
    b=find(b);
    if (a!=b) {
        parent[b]=a;
        return true;
    }
    return false;
}

bool same(int a, int b) {
    return find(a)==find(b);
}

class Edge {
public:
    int u,v,w;
    Edge(int u, int v, int w) :u(u),v(v),w(w){}
    bool operator<(const Edge &edge) const {
        return w>edge.w;
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
    arr.reserve(m);

    for (int i=0; i<m; i++) {
        int a,b,c;
        cin>>a>>b>>c;
        arr.emplace_back(a,b,c);
    }

    sort(arr.begin(),arr.end());

    long long ans=0;
    int cnt=0;
    for (auto &i:arr) {
        if (unite(i.u,i.v)) {
            ans+=i.w;
            cnt++;
        }
    }
    cout<<(cnt==n-1?ans:-1);
}