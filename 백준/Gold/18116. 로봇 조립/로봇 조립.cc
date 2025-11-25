#include <bits/stdc++.h>
using namespace std;

vector<int>parent;

int find(int x) {
    if (parent[x]<0) return x;
    else return parent[x]=find(parent[x]);
}

void merge(int x, int y) {
    x=find(x);
    y=find(y);
    if (x==y) return;
    if (parent[x]>parent[y]) swap(x,y);
    if (x!=y) {
        parent[x]+=parent[y];
        parent[y]=x;
    }
}

bool same(int x, int y) {
    return find(x)==find(y);
}

int unionSize(int x) {
    return -parent[find(x)];
}

int main() {
    cin.tie(0)->sync_with_stdio(0);

    parent.assign(1000001,-1);
    int t;
    cin>>t;
    while (t--) {
        char c;
        cin>>c;
        if (c=='I') {
            int a,b;
            cin>>a>>b;
            merge(a,b);
        }else {
            int a;
            cin>>a;
            cout<<unionSize(a)<<"\n";
        }
    }
}