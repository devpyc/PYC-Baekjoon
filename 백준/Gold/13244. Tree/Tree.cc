#include <bits/stdc++.h>
using namespace std;

vector<int>parent,s,candy;

int find(int x) {
    if (parent[x]==x) return x;
    else return parent[x]=find(parent[x]);
}

bool unite(int x, int y) {
    x=find(x);
    y=find(y);
    if (x==y) return false;
    parent[y]=x;
    return true;
}

bool same(int x, int y) {
    return find(x)==find(y);
}

int main() {
    int t;
    cin>>t;
    while (t--) {
        int n,m;
        cin>>n>>m;

        parent.resize(n+1);
        for (int i=1; i<=n; i++) {
            parent[i]=i;
        }

        bool check=false;
        while (m--) {
            int a,b;
            cin>>a>>b;
            if (!unite(a,b)) check=true;
        }
        int cnt=0;
        for (int i=1; i<=n; i++) {
            if (find(i)==i) cnt++;
        }

        cout<<(!check&&cnt==1&&n>0?"tree\n":"graph\n");
    }
}