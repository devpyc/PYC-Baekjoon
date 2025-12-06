#include <bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
using namespace std;
using namespace __gnu_pbds;

typedef tree<pair<int,int>,null_type,less<pair<int,int>>,rb_tree_tag,tree_order_statistics_node_update>ordered_multiset;

int main() {
    cin.tie(0)->sync_with_stdio(0);

    int n;
    cin>>n;

    ordered_multiset s;

    int cnt=0;
    while (n--) {
        int a,b;
        cin>>a>>b;
        if (a==1) s.insert({b,cnt++});
        else {
            auto it=s.find_by_order(b-1);
            cout<<it->first<<"\n";
            s.erase(it);
        }
    }
}