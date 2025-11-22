#include <bits/stdc++.h>
using namespace std;

vector<int>parent,s,candy;

int find(int x) {
    if (parent[x]==x) return x;
    else return parent[x]=find(parent[x]);
}

void unite(int x, int y) {
    x=find(x);
    y=find(y);
    if (x!=y) {
        parent[y]=x;
        s[x]+=s[y];
        candy[x]+=candy[y];
    }
}

bool same(int x, int y) {
    return find(x)==find(y);
}

int main() {
    int n,m,k;
    cin>>n>>m>>k;

    parent.resize(n+1);
    s.assign(n+1,1);
    candy.resize(n+1);

    for (int i=1; i<=n; i++) {
        parent[i]=i;
    }
    for (int i=1; i<=n; i++) {
        cin>>candy[i];
    }

    while (m--) {
        int a,b;
        cin>>a>>b;
        unite(a,b);
    }

    vector<pair<int,int>>arr;
    for (int i=1; i<=n; i++) {
        if (find(i)==i) arr.push_back({s[i],candy[i]});
    }

    vector<int>dp(k,0);

    for (auto i:arr) {
        for (int j=k-1; j>=i.first; j--) {
            dp[j]=max(dp[j],dp[j-i.first]+i.second);
        }
    }
    cout<<dp[k-1];
}