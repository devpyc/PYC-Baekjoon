#include <bits/stdc++.h>
using namespace std;

struct UnionFind {
    vector<int> parent, Rank;
    UnionFind(int n): parent(n+1), Rank(n+1, 0) {
        for (int i=0; i<=n; i++) parent[i]=i;
    }

    int find(int x) {
        if (parent[x]==x) return x;
        return parent[x]=find(parent[x]);
    }
    void unite(int a, int b) {
        a=find(a);
        b=find(b);
        if(a==b) return;
        if(Rank[a]<Rank[b]) parent[a]=b;
        else if(Rank[a]>Rank[b]) parent[b]=a;
        else{
            parent[b]=a;
            Rank[a]++;
        }
    }
    bool check(int a, int b) {
        return find(a)==find(b);
    }
};

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int n,m;
    cin>>n>>m;
    UnionFind arr(n);

    while(m--) {
        int a,b,c;
        cin>>a>>b>>c;
        if(a==0){
            arr.unite(b, c);
        } else if(a==1){
            cout<<(arr.check(b, c)?"YES\n":"NO\n");
        }
    }
}