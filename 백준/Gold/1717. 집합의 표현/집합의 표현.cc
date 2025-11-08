#include <bits/stdc++.h>
using namespace std;

vector<int>parent;

int find(int x) {
    return parent[x]==x?x:parent[x]=find(parent[x]);
}

void unite(int a, int b) {
    a=find(a);
    b=find(b);
    if (a!=b) parent[b]=a;
}

bool same(int a, int b) {
    return find(a)==find(b);
}

int main() {
    cin.tie(0)->sync_with_stdio(0);

    int n,m;
    cin>>n>>m;

    parent.resize(n+1);
    for (int i=0; i<=n; i++) {
        parent[i]=i;
    }
    while (m--) {
        int x,a,b;
        cin>>x>>a>>b;
        if (x) cout<<(same(a,b)?"YES":"NO")<<"\n";
        else unite(a,b);
    }
}