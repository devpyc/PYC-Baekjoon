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
    int u,v;
    double w;
    Edge(int u, int v, double w):u(u),v(v),w(w){}
    bool operator<(const Edge &edge) const {
        return w<edge.w;
    }
};

int main() {
    cin.tie(0)->sync_with_stdio(0);

    int n;
    cin>>n;

    vector<pair<double,double>>star(n);
    for (int i=0; i<n; i++) {
        cin>>star[i].first>>star[i].second;
    }
    parent.resize(n);
    for (int i=0; i<n; i++) {
        parent[i]=i;
    }

    vector<Edge>arr;

    for (int i=0; i<n; i++) {
        for (int j=i+1; j<n; j++) {
            double dx=star[i].first-star[j].first,dy=star[i].second-star[j].second;
            double dist=sqrt(dx*dx+dy*dy);
            arr.emplace_back(i,j,dist);
        }
    }

    sort(arr.begin(),arr.end());

    double ans=0;
    int cnt=0;

    for (auto i:arr) {
        if (!same(i.u,i.v)) {
            unite(i.u,i.v);
            ans+=i.w;
            if (++cnt==n-1) break;
        }
    }
    cout.precision(3);
    cout<<ans;
}