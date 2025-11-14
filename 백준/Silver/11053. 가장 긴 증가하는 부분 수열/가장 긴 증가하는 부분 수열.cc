#include <bits/stdc++.h>
using namespace std;

int lis(vector<int>&arr) {
    vector<int>lis;
    for (int i:arr) {
        auto it=lower_bound(lis.begin(),lis.end(),i);
        if (it==lis.end()) lis.push_back(i);
        else *it=i;
    }
    return (int)lis.size();
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