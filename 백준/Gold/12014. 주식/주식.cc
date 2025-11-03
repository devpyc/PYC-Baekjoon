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

    int t;
    cin>>t;
    for (int i=1; i<=t; i++) {
        int n,k;
        cin>>n>>k;
        vector<int>arr(n);
        for (int i=0; i<n; i++) {
            cin>>arr[i];
        }
        int ans=lis(arr);
        cout<<"Case #"<<i<<"\n"<<(ans>=k)<<"\n";
    }
}