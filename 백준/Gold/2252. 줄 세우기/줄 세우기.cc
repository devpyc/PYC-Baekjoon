#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int n,m;
    cin>>n>>m;

    vector<vector<int>>arr(n+1);
    vector<int>cnt(n+1,0);

    for (int i = 0; i < m; i++) {
        int a,b;
        cin>>a>>b;
        arr[a].push_back(b);
        cnt[b]++;
    }

    queue<int> q;
    for (int i=1; i<=n; i++) {
        if (cnt[i]==0) {
            q.push(i);
        }
    }

    vector<int>ans;
    ans.reserve(n);

    while(!q.empty()) {
        int u=q.front();
        q.pop();
        ans.push_back(u);

        for(int v:arr[u]) {
            if(--cnt[v]==0) {
                q.push(v);
            }
        }
    }
    for(int i:ans) {
        cout<<i<<' ';
    }
}