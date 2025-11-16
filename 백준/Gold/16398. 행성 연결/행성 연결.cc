#include <bits/stdc++.h>
using namespace std;

vector<int>parent;

int find(int x) {
    if (parent[x]==x) return x;
    else return parent[x]=find(parent[x]);
}

void unite(int a, int b) {
    a=find(a);
    b=find(b);
    if (a!=b) parent[b]=a;
}

bool same(int a, int b) {
    return find(a)==find(b);
}

class Edge {
public:
    int first;
    int second;
    int dist;
    Edge(int a, int b, int c) {
        first=a;
        second=b;
        dist=c;
    }
    bool operator<(const Edge &edge) const {
        return dist<edge.dist;
    }
};

int main() {
    cin.tie(0)->sync_with_stdio(0);

    int n;
    cin>>n;

    parent.resize(n);
    for (int i=0; i<n; i++) {
        parent[i]=i;
    }

    vector<Edge>arr;
    arr.reserve(n*n);

    int d;
    for (int i=0; i<n; i++) {
        for (int j=0; j<n; j++) {
            cin>>d;
            if (i<j) arr.emplace_back(i,j,d);
        }
    }

    sort(arr.begin(),arr.end());

    long long ans=0;
    int cnt=0;

    for (auto &i:arr) {
        if (!same(i.first,i.second)) {
            unite(i.first,i.second);
            ans+=i.dist;
            cnt++;
            if (cnt==n-1)break;
        }
    }
    cout<<ans;
}