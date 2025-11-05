#include <bits/stdc++.h>
using namespace std;

int lis(vector<int>&arr) {
    vector<int>lis;
    for (auto x:arr) {
        auto it=lower_bound(lis.begin(),lis.end(),x);
        if (it==lis.end()) lis.push_back(x);
        else *it=x;
    }
    return (int)lis.size();
}

int main() {
    cin.tie(0)->sync_with_stdio(0);

    int n;
    cin>>n;
    vector<int>a(n),b(n);
    for (int i=0; i<n; i++) {
        cin>>a[i];
    }
    for (int i=0; i<n; i++) {
        cin>>b[i];
    }
    vector<int>idx(n+1);
    vector<int>arr(n);
    for (int i=0; i<n; i++) {
        idx[b[i]]=i;
    }
    for (int i=0; i<n; i++) {
        arr[i]=idx[a[i]];
    }
    cout<<lis(arr);
}