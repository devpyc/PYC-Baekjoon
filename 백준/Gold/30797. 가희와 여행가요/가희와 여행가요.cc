#include <bits/stdc++.h>
using namespace std;

vector<int>parent,s;

int find(int x) {
    if (parent[x]==x) return x;
    else return parent[x]=find(parent[x]);
}

bool unite(int x, int y) {
    x=find(x);
    y=find(y);
    if (x==y) return false;
    if (s[x]<s[y]) swap(x,y);
    parent[y]=x;
    s[x]+=s[y];
    return true;
}

class Edge {
public:
    int u,v;
    long long w,t;
    Edge(int u, int v, long long w, long long t):u(u),v(v),w(w), t(t){}
    bool operator<(const Edge &edge) const {
        if (w==edge.w) return t<edge.t;
        return w<edge.w;
    }
};

int main() {
    cin.tie(0)->sync_with_stdio(0);

    int n,m;
    cin>>n>>m;

    parent.resize(n+1);
    s.assign(n+1,1);
    for (int i=1; i<=n; i++) {
        parent[i]=i;
    }

    vector<Edge>arr;
    arr.reserve(m);

    while (m--) {
        int a,b;
        long long c,d;
        cin>>a>>b>>c>>d;
        arr.emplace_back(a,b,c,d);
    }
    sort(arr.begin(),arr.end());

    long long res=0,MAX=0,cnt=0;
    for (auto i:arr) {
        if (unite(i.u,i.v)) {
            res+=i.w;
            MAX=max(MAX,i.t);
            cnt++;
            if (cnt==n-1) break;
        }
    }
    if (cnt!=n-1) cout<<-1;
    else cout<<MAX<<" "<<res;
}