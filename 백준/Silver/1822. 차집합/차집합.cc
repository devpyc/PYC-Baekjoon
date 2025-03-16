#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int n,m;
    cin>>n>>m;

    vector<int>a(n);
    vector<int>b(m);

    for(int i=0; i<n; i++) {
        cin>>a[i];
    }
    for(int i=0; i<m; i++) {
        cin>>b[i];
    }

    sort(a.begin(),a.end());
    sort(b.begin(),b.end());

    vector<int>ans;

    for(int i=0; i<n; i++) {
        auto it=lower_bound(b.begin(),b.end(),a[i]);

        if(it==b.end() || *it!=a[i]) {
            ans.push_back(a[i]);
        }
    }

    cout<<ans.size()<<"\n";
    for(int res:ans) {
        cout<<res<<" ";
    }
}