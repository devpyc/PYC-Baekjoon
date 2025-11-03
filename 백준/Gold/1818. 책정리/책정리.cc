#include <bits/stdc++.h>
using namespace std;

int lis(vector<int>&arr) {
    vector<int>lis;
    for (int x:arr) {
        auto it=lower_bound(lis.begin(),lis.end(),x);
        if (it==lis.end()) lis.push_back(x);
        else *it=x;
    }
    return static_cast<int>(lis.size());
}

int main() {
    cin.tie(0)->sync_with_stdio(0);

    int n;
    cin>>n;
    vector<int>a(n);
    for (int i=0; i<n; i++) {
        cin>>a[i];
    }
    int ans=lis(a);

    cout<<n-ans;
}