#include <bits/stdc++.h>
using namespace std;

vector<int>parent;
vector<long long>s;

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

    int n,m;
    long long k;
    cin>>n>>m>>k;

    parent.resize(n+1);
    s.resize(n+1);
    for (int i=1; i<=n; i++) {
        parent[i]=i;
        cin>>s[i];
    }

    vector<bool>check(n+1,false);

    for (int i=0; i<m; i++) {
        int a,b;
        cin>>a>>b;
        if (a>b) swap(a,b);

        if (a==1&&b==n) check[n]=true;
        else check[a]=true;
    }

    for (int i=1; i<n; i++) {
        if (!check[i]) unite(i,i+1);
    }
    if (!check[n]) unite(1,n);

    unordered_map<int,long long>umap;
    for (int i=1; i<=n; i++) {
        if (!umap.count(find(i))) umap[find(i)]=s[i];
        else umap[find(i)]=min(umap[find(i)],s[i]);
    }

    if (umap.size()==1) {
        cout<<"YES";
        return 0;
    }

    long long ans=0;
    for (auto i:umap) {
        ans+=i.second;
    }
    cout<<(ans<=k?"YES":"NO");
}