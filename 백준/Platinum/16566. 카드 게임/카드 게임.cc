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
    if (x!=y) parent[y]=x;
}

int main() {
    cin.tie(0)->sync_with_stdio(0);

    int n,m,k;
    cin>>n>>m>>k;

    vector<int>arr(m);
    for (int i=0; i<m; i++) {
        cin>>arr[i];
    }

    sort(arr.begin(),arr.end());

    parent.resize(m+1);
    for (int i=1; i<=m; i++) {
        parent[i]=i;
    }

    while (k--) {
        int x;
        cin>>x;
        auto i=upper_bound(arr.begin(),arr.end(),x)-arr.begin();
        i=find(i);
        cout<<arr[i]<<"\n";
        parent[i]=find(i+1);
    }
}