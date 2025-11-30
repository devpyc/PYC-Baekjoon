#include <bits/stdc++.h>
using namespace std;

vector<int>parent;

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

class Edge {
public:
    int u,v,w;
    Edge(int u, int v, int w):u(u),v(v),w(w){}
    bool operator<(const Edge &edge) const {
        return w<edge.w;
    }
};

int main() {
    cin.tie(0)->sync_with_stdio(0);

    int t;
    cin>>t;
    while (t--) {
        int n,m;
        cin>>n>>m;

        vector<Edge>arr;
        for (int i=1; i<n; i++) {
            int a,b;
            cin>>a>>b;
            arr.emplace_back(a,i,b);
        }
        long long ans=0;

        while (m--) {
            int a,b,c;
            cin>>a>>b>>c;
            arr.emplace_back(a,b,c);
            sort(arr.begin(),arr.end());
            parent.resize(n);
            for (int j=0; j<n; j++) {
                parent[j]=j;
            }
            long long sum=0;
            int cnt=0;
            for (auto i:arr) {
                if (unite(i.u,i.v)) {
                    sum+=i.w;
                    cnt++;
                    if (cnt==n-1) break;
                }
            }
            ans^=sum;
        }
        cout<<ans<<"\n";
    }
}