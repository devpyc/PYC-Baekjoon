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
    for (int i=1; i<=n; i++) {
        parent[i]=i;
    }
    vector<vector<int>>arr(n+1,vector<int>(n+1));

    for (int i=1; i<=n; i++) {
        for (int j=1; j<=n; j++) {
            cin>>arr[i][j];
        }
    }

    for (int i=1; i<=n; i++) {
        for (int j=1; j<=n; j++) {
            if (arr[i][j]==1) unite(i,j);
        }
    }

    vector<int>res(m);
    for (int i=0; i<m; i++) {
        cin>>res[i];
    }
    bool check=true;
    int root=find(res[0]);
    for (int i=1; i<m; i++) {
        if (find(res[i])!=root) {
            check=false;
            break;
        }
    }
    cout<<(check?"YES":"NO");
}