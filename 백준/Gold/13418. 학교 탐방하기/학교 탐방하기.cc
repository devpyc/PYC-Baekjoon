#include <bits/stdc++.h>
using namespace std;

vector<int> parent;

int find(int x) {
    if (parent[x] == x) return x;
    else return parent[x] = find(parent[x]);
}

void Union(int x, int y) {
    x=find(x);
    y=find(y);
    if (x!=y) parent[y]=x;
}

bool same(int x, int y) {
    return find(x)==find(y);
}

class Edge {
public:
    int w,u,v;
    Edge(int w, int u, int v):w(w),u(u),v(v){}
};

bool compMin(const Edge& a, const Edge& b) {
    return a.w>b.w;
}

bool compMax(const Edge& a, const Edge& b) {
    return a.w<b.w;
}

int main() {
    cin.tie(0)->sync_with_stdio(0);

    int n,m;
    cin>>n>>m;

    parent.resize(n+2);
    for (int i=0; i<=n+1; i++) {
        parent[i]=i;
    }

    vector<Edge>arr1,arr2;

    for (int i=0; i<=m; i++) {
        int a,b,c;
        cin>>a>>b>>c;
        arr1.emplace_back(c,a,b);
        arr2.emplace_back(c,a,b);
    }

    sort(arr1.begin(),arr1.end(),compMin);
    sort(arr2.begin(),arr2.end(),compMax);

    int ans=0;
    for (auto i:arr1) {
        if (!same(i.u,i.v)) {
            Union(i.u,i.v);
            if (i.w==0) ans++;
        }
    }

    for (int i=0; i<=n+1; i++) {
        parent[i]=i;
    }

    int res=0;
    for (auto i:arr2) {
        if (!same(i.u,i.v)) {
            Union(i.u,i.v);
            if (i.w==0) res++;
        }
    }
    cout<<res*res-ans*ans;
}