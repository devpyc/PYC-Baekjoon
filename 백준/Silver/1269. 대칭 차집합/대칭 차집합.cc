#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int n,m;
    cin>>n>>m;
    set<int>a,b;
    for(int i=0; i<n; i++) {
        int x;
        cin>>x;
        a.insert(x);
    }
    for(int i=0; i<m; i++) {
        int x;
        cin>>x;
        b.insert(x);
    }
    set<int>ans;

    for(int i:a) {
        if(b.find(i)==b.end()) {
            ans.insert(i);
        }
    }
    for(int i:b) {
        if(a.find(i)==a.end()) {
            ans.insert(i);
        }
    }
    cout<<ans.size();
}