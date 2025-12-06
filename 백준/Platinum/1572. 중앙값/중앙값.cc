#include <bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
using namespace std;
using namespace __gnu_pbds;

typedef tree<pair<int,int>,null_type,less<pair<int,int>>,rb_tree_tag,tree_order_statistics_node_update>ordered_multiset;

int main() {
    cin.tie(0)->sync_with_stdio(0);

    int n,k;
    cin>>n>>k;
    vector<int>arr(n);
    for (int i=0; i<n; i++) {
        cin>>arr[i];
    }

    ordered_multiset s;
    long long ans=0;

    for (int i=0; i<k; i++) {
        s.insert({arr[i],i});
    }

    int mid=(k-1)/2;
    ans+=s.find_by_order(mid)->first;

    for (int i=k; i<n; i++) {
        s.erase({arr[i-k],i-k});
        s.insert({arr[i],i});
        ans+=s.find_by_order(mid)->first;
    }
    cout<<ans;
}