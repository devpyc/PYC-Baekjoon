#include <bits/stdc++.h>
using namespace std;

int lis(const vector<int>&arr) {
    vector<int>lis;
    for (int x:arr) {
        auto it=std::lower_bound(lis.begin(),lis.end(),x);
        if (it==lis.end()) lis.push_back(x);
        else *it=x;
    }
    return static_cast<int>(lis.size());
}

int main() {
    cin.tie(0)->sync_with_stdio(0);

    int n;
    cin>>n;
    vector<int>arr(n);
    for (int i=0; i<n; i++) {
        cin>>arr[i];
    }
    cout<<lis(arr);
}