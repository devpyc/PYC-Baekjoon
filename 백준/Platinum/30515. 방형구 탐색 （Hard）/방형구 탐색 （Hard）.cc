#include <bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
using namespace std;
using namespace __gnu_pbds;

typedef tree<int,null_type,less<int>,rb_tree_tag,tree_order_statistics_node_update>ordered_set;

vector<int>parent;

int find(int x) {
    if (parent[x]==x) return x;
    return parent[x]=find(parent[x]);
}

int main() {
    cin.tie(0)->sync_with_stdio(0);

    int n;
    cin>>n;

    vector<int>arr(n+1);
    for (int i=1; i<=n; i++) {
        cin>>arr[i];
    }

    unordered_map<int,ordered_set>m;
    m.reserve(n*2);

    for (int i=1; i<=n; i++) {
        m[arr[i]].insert(i);
    }

    parent.resize(n+2);
    for (int i=1; i<=n+1; i++) {
        parent[i]=i;
    }

    int q;
    cin>>q;

    while (q--) {
        int tt;
        cin>>tt;
        if (tt==1) {
            int l,r,k;
            cin>>l>>r>>k;

            if (m.find(k)==m.end()) {
                cout<<0<<"\n";
            }else {
                auto &it=m[k];
                int ans=it.order_of_key(r+1)-it.order_of_key(l);
                cout<<ans<<"\n";
            }
        }else {
            int l,r;
            cin>>l>>r;

            int i=find(l);
            while (i<=r) {
                m[arr[i]].erase(i);
                arr[i]=0;
                parent[i]=i+1;
                i=find(i);
            }
        }
    }
}