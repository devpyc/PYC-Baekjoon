#include <bits/stdc++.h>
using namespace std;

int main() {
    cin.tie(0)->sync_with_stdio(0);

    int n,m;
    cin>>n>>m;

    vector<vector<int>>arr(n+1);
    vector<int>cnt(n+1);
    for (int i=0; i<m; i++) {
        int a,b;
        cin>>a>>b;
        arr[a].push_back(b);
        cnt[b]++;
    }

    queue<int>q;
    for (int i=1; i<=n; i++) {
        if (cnt[i]==0) q.push(i);
    }

    vector<int>ans;
    ans.reserve(n);

    while (!q.empty()) {
        int u=q.front();
        q.pop();
        ans.push_back(u);

        for (int i:arr[u]) {
            if (--cnt[i]==0) q.push(i);
        }
    }
    for (int i:ans) {
        cout<<i<<" ";
    }
}