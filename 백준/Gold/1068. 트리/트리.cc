#include <bits/stdc++.h>
using namespace std;

int n,r,p,cnt;
vector<int>tree[51];

void dfs(int n) {
    if (n==p) return;
    if (tree[n].empty()) {
        cnt++;
        return;
    }
    if (tree[n].size()==1&&tree[n][0]==p) {
        cnt++;
        return;
    }
    for (int i=0; i<tree[n].size(); i++) {
        dfs(tree[n][i]);
    }
}

int main() {
    cin.tie(0)->sync_with_stdio(0);

    cin>>n;
    for (int i=0; i<n; i++) {
        int a;
        cin>>a;
        if (a==-1) r=i;
        else tree[a].push_back(i);
    }
    cin>>p;
    if (p==r) {
        cout<<0;
        return 0;
    }
    dfs(r);
    cout<<cnt;
}