#include <bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
using namespace std;
using namespace __gnu_pbds;

typedef tree<long long,null_type,less<long long>,rb_tree_tag,tree_order_statistics_node_update>ordered_set;

int main() {
    cin.tie(0)->sync_with_stdio(0);

    int n;
    cin>>n;
    vector<long long>arr(n);
    for (int i=0; i<n; i++) {
        cin>>arr[i];
    }
    vector<int>left(n),right(n);
    ordered_set s;

    for (int i=0; i<n; i++) {
        int a=s.order_of_key(arr[i]),b=s.size()-a;
        left[i]=b;
        s.insert(arr[i]);
    }

    s.clear();

    for (int i=n-1; i>=0; i--) {
        int a=s.order_of_key(arr[i]),b=s.size()-a;
        right[i]=b;
        s.insert(arr[i]);
    }

    int ans=0;
    for (int i=0; i<n; i++) {
        int a=left[i],b=right[i];
        if (a==0&&b==0) continue;
        int MAX=max(a,b),MIN=min(a,b);
        if (MAX>2LL*MIN) ans++;
    }
    cout<<ans;
}