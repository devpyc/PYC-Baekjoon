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
    Edge(int u, int v, int w):u(u),v(v),w(w){}
    bool operator<(const Edge &edge) const {
        return w<edge.w;
    }
};

int main() {
    cin.tie(0)->sync_with_stdio(0);

    int n;
    cin>>n;
    vector<Edge>arr;
    vector<int>res(n+1);
    for (int i=1; i<=n; i++) {
        cin>>res[i];
        arr.emplace_back(0,i,res[i]);
    }

    for (int i=1; i<=n; i++) {
        for (int j=1; j<=n; j++) {
            int x;
            cin>>x;
            if (i<j) arr.emplace_back(i,j,x);
        }
    }

    parent.resize(n+1);
    for (int i=0; i<=n; i++) {
        parent[i]=i;
    }

    sort(arr.begin(),arr.end());

    long long ans=0,cnt=0;

    for (auto i:arr) {
        if (!same(i.u,i.v)) {
            unite(i.u,i.v);
            ans+=i.w;
            cnt++;
            if (cnt==n) break;
        }
    }
    cout<<ans;
}