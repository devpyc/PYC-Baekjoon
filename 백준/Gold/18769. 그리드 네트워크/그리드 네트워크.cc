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
    if (x!=y) {
        parent[y]=x;
    }
}

bool same(int x, int y) {
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

    int t;
    cin>>t;
    while (t--) {
        int n,m;
        cin>>n>>m;
        parent.resize(n*m);
        for (int i=0; i<n*m; i++) {
            parent[i]=i;
        }

        vector<Edge>arr;
        arr.reserve(2*n*m);

        for (int i=0; i<n; i++) {
            for (int j=0; j<m-1; j++) {
                int u=i*m+j,v=u+1;
                int w;
                cin>>w;
                arr.emplace_back(u,v,w);
            }
        }

        for (int i=0; i<n-1; i++) {
            for (int j=0; j<m; j++) {
                int u=i*m+j,v=u+m;
                int w;
                cin>>w;
                arr.emplace_back(u,v,w);
            }
        }
        sort(arr.begin(),arr.end());

        long long ans=0;
        int cnt=0;
        for (auto i:arr) {
            if (!same(i.u,i.v)) {
                unite(i.u,i.v);
                ans+=i.w;
                if (++cnt==n*m-1) break;
            }
        }
        cout<<ans<<"\n";
    }
}