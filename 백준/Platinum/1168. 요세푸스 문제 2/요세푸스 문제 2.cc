#include <bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
using namespace std;
using namespace __gnu_pbds;

typedef tree<int,null_type,less<int>,rb_tree_tag,tree_order_statistics_node_update>ordered_set;

int main() {
    cin.tie(0)->sync_with_stdio(0);

    int n,k;
    cin>>n>>k;
    ordered_set s;
    for (int i=1; i<=n; i++) {
        s.insert(i);
    }

    int idx=0;
    vector<int>ans;
    while (!s.empty()) {
        idx=(idx+k-1)%s.size();
        auto it=s.find_by_order(idx);
        ans.push_back(*it);
        s.erase(it);
    }
    cout<<"<";
    for (int i=0; i<ans.size(); i++) {
        cout<<ans[i];
        if (i+1<ans.size()) {
            cout<<", ";
        }
    }
    cout<<">";
}