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

bool same(int x, int y) {
    return find(x)==find(y);
}

struct Point {
    int idx,x,y,z;
};

struct Edge {
    int u,v,w;
    bool operator<(const Edge &edge) const {
        return w<edge.w;
    }
};

int main() {
    cin.tie(0)->sync_with_stdio(0);

    int n;
    cin>>n;

    vector<Point>arr(n);
    for (int i=0; i<n; i++) {
        cin>>arr[i].x>>arr[i].y>>arr[i].z;
        arr[i].idx=i;
    }

    vector<Edge>edge;
    edge.reserve((n-1)*3);

    for (int i=0; i<3; i++) {
        if (i==0) sort(arr.begin(),arr.end(),[](auto &a, auto &b){return a.x<b.x;});
        else if (i==1) sort(arr.begin(),arr.end(),[](auto &a, auto &b){return a.y<b.y;});
        else sort(arr.begin(),arr.end(),[](auto &a, auto &b){return a.z<b.z;});

        for (int j=0; j<n-1; j++) {
            int dx=abs(arr[j].x-arr[j+1].x),dy=abs(arr[j].y-arr[j+1].y),dz=abs(arr[j].z-arr[j+1].z);
            int w=min({dx,dy,dz});
            edge.push_back({arr[j].idx,arr[j+1].idx,w});
        }
    }
    sort(edge.begin(),edge.end());

    parent.resize(n);
    for (int i=0; i<n; i++) {
        parent[i]=i;
    }

    long long ans=0;
    int cnt=0;

    for (auto &i:edge) {
        if (!same(i.u,i.v)) {
            merge(i.u,i.v);
            ans+=i.w;
            if (++cnt==n-1) break;
        }
    }
    cout<<ans;
}