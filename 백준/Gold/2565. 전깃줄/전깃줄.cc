#include <bits/stdc++.h>
using namespace std;

int lis(vector<pair<int,int>>&arr) {
    vector<int>lis;
    for (auto p:arr) {
        int x=p.second;
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
    vector<pair<int,int>>arr(n);
    for (int i=0; i<n; i++) {
        cin>>arr[i].first>>arr[i].second;
    }
    sort(arr.begin(),arr.end());
    cout<<n-lis(arr);
}