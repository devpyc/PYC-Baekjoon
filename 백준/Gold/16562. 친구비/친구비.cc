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

    int n,m,k;
    cin>>n>>m>>k;
    
    parent.resize(n+1);
    for (int i=1; i<=n; i++) {
        parent[i]=i;
    }
    
    int arr[n+1];
    for (int i=1; i<=n; i++) {
        cin>>arr[i];
    }
    
    while (m--) {
        int a,b;
        cin>>a>>b;
        unite(a,b);
    }
    
    vector<int>res(n+1,INT_MAX);
    for (int i=1; i<=n; i++) {
        res[find(i)]=min(res[find(i)],arr[i]);
    }
    
    long long ans=0;
    for (int i=1; i<=n; i++) {
        if (parent[i]==i) ans+=res[i];
    }
    
    if (ans<=k) cout<<ans;
    else cout<<"Oh no";
}