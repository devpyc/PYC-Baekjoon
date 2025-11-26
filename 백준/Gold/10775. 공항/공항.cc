#include <bits/stdc++.h>
using namespace std;

vector<int>parent;

int find(int x) {
    if (parent[x]==x) return x;
    else return parent[x]=find(parent[x]);
}

void merge(int x, int y) {
    x=find(x);
    y=find(y);
    if (x!=y) parent[x]=y;
}

bool same(int x, int y) {
    return find(x)==find(y);
}

int main() {
    cin.tie(0)->sync_with_stdio(0);

    int g,p;
    cin>>g>>p;

    parent.resize(g+1);
    for (int i=1; i<=g; i++) {
        parent[i]=i;
    }

    int ans=0;
    while (p--) {
        int x;
        cin>>x;
        int i=find(x);
        if (i==0) break;
        merge(i,i-1);
        ans++;
    }
    cout<<ans;
}