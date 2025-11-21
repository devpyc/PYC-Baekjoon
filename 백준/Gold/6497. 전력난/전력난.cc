#include <bits/stdc++.h>
using namespace std;

vector<int>parent;

int find(int x) {
    if (parent[x]==x) return x;
    else return parent[x]=find(parent[x]);
}

void Union(int x, int y) {
    x=find(x);
    y=find(y);
    if (x!=y) parent[y]=x;
}

bool same(int x,int y) {
    return find(x)==find(y);
}

class Edge {
public:
    int u,v,w;
    Edge(int u, int v, int w):u(u),v(v),w(w){}
    bool operator<(const Edge &edge) const {
        return w<edge.w;
    }
};

int main() {
    cin.tie(0)->sync_with_stdio(0);

    while (true) {
        int n,m;
        cin>>n>>m;
        if (!(n+m)) return 0;

        parent.resize(n);
        for (int i=0; i<n; i++) {
            parent[i]=i;
        }

        vector<Edge>arr;

        int sum=0;
        while (m--) {
            int a,b,c;
            cin>>a>>b>>c;
            arr.emplace_back(a,b,c);
            sum+=c;
        }
        sort(arr.begin(),arr.end());

        int ans=0;
        for (auto i:arr) {
            if (!same(i.u,i.v)) {
                Union(i.u,i.v);
                ans+=i.w;
            }
        }
        cout<<sum-ans<<"\n";
    }
}