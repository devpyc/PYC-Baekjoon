#include <bits/stdc++.h>
using namespace std;

int main() {
    cin.tie(0)->sync_with_stdio(0);

    int a, k;
    cin >> a >> k;

    queue<pair<int,int>>q;
    vector<bool>visited(k*2+1,false);

    q.push({a,0});
    visited[a]=true;

    while (!q.empty()) {
        int cur=q.front().first;
        int op=q.front().second;
        q.pop();

        if (cur==k) {
            cout<<op<<"\n";
            return 0;
        }

        int idx1=cur+1;
        if (idx1<=k*2&&!visited[idx1]) {
            visited[idx1] = true;
            q.push({idx1,op+1});
        }

        int idx2=cur*2;
        if (idx2<=k*2&&!visited[idx2]) {
            visited[idx2]=true;
            q.push({idx2,op+1});
        }
    }
}