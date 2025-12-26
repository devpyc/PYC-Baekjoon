#include <bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>
using namespace std;
using namespace __gnu_pbds;

typedef tree<pair<long long,int>,null_type,less<pair<long long,int>>,rb_tree_tag,tree_order_statistics_node_update>ordered_set;

int main() {
    cin.tie(0)->sync_with_stdio(0);

    int n;
    cin>>n;

    vector<long long>arr(n+1);
    ordered_set s;

    for (int i=1; i<=n; i++) {
        cin>>arr[i];
        s.insert({arr[i],i});
    }

    int m;
    cin>>m;

    while (m--) {
        int tt;
        cin>>tt;

        if (tt==1) {
            int a;
            long long b;
            cin>>a>>b;

            s.erase({arr[a],a});

            arr[a]=b;
            s.insert({arr[a],a});
        }else {
            cout<<s.begin()->second<<"\n";
        }
    }
}