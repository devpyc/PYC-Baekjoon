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
    int u,v,w;
    Edge(int u, int v, int w) :u(u),v(v),w(w){}
    bool operator<(const Edge &edge) const {
        return w<edge.w;
    }
};

int main() {
    cin.tie(0)->sync_with_stdio(0);

    while (true) {
        int n,m;
        cin>>n>>m;
        if (n==0&&m==0) return 0;

        parent.resize(n);
        for (int i=0; i<n; i++) {
            parent[i]=i;
        }

        vector<Edge>arr;
        arr.reserve(m);

        long long sum=0;
        for (int i=0; i<m; i++) {
            int a,b,c;
            cin>>a>>b>>c;
            arr.emplace_back(a,b,c);
            sum+=c;
        }

        sort(arr.begin(),arr.end());

        long long ans=0;
        for (auto &i:arr) {
            if (!same(i.u,i.v)) {
                unite(i.u,i.v);
                ans+=i.w;
            }
        }
        cout<<sum-ans<<"\n";
    }
}