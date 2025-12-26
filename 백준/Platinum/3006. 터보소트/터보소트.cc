#include <bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>
using namespace std;
using namespace __gnu_pbds;

typedef tree<pair<int,int>,null_type,less<pair<int,int>>,rb_tree_tag,tree_order_statistics_node_update> ordered_set;

int main() {
    cin.tie(0)->sync_with_stdio(0);

    int n;
    cin>>n;

    vector<int>arr(n+1),res(n+1);

    for (int i=1; i<=n; i++) {
        cin>>arr[i];
        res[arr[i]]=i;
    }

    ordered_set s;
    for (int i=1; i<=n; i++) {
        s.insert({res[i],i});
    }

    int l=1,r=n;

    for (int i=1; i<=n; i++) {
        if (i%2==1) {
            int p=res[l];
            int cur=s.order_of_key({p,l});
            cout<<cur<<"\n";

            s.erase({p,l});
            l++;
        }else {
            int p=res[r];
            int cur=s.order_of_key({p,r});
            cout<<s.size()-cur-1<<"\n";

            s.erase({p,r});
            r--;
        }
    }
}