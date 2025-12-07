#include <bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
using namespace std;
using namespace __gnu_pbds;

typedef tree<tuple<int,int,int>,null_type,less<tuple<int,int,int>>,rb_tree_tag,tree_order_statistics_node_update>ordered_multiset;

int main() {
    cin.tie(0)->sync_with_stdio(0);

    int n,m;
    cin>>n>>m;

    vector<int>arr(n+1,0),res(n+1,0);
    
    ordered_multiset s;
    for (int i=1; i<=n; i++) {
        s.insert({0,0,i});
    }

    while (m--) {
        int a,b;
        cin>>a>>b;
        s.erase({-arr[a],res[a],a});
        
        arr[a]++;
        res[a]+=b;
        
        s.insert({-arr[a],res[a],a});
        tuple<int,int,int>t={-arr[1],res[1],1};
        
        int ans=s.order_of_key(t);
        cout<<ans+1<<"\n";
    }
}