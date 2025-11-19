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

int main() {
    cin.tie(0)->sync_with_stdio(0);

    int t;
    cin>>t;
    for (int tc=1; tc<=t; tc++) {
        int n,m;
        cin>>n>>m;

        parent.resize(n+1);
        for (int i=1; i<=n; i++) {
            parent[i]=i;
        }
        while (m--) {
            int a,b;
            cin>>a>>b;
            unite(a,b);
        }
        int k;
        cin>>k;
        cout<<"Scenario "<<tc<<":\n";
        while (k--) {
            int a,b;
            cin>>a>>b;
            cout<<same(a,b)<<"\n";
        }
        cout<<"\n";
    }
}