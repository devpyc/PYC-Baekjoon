#include <bits/stdc++.h>
using namespace std;

int main() {
    cin.tie(0)->sync_with_stdio(0);

    int n,m;
    cin>>n>>m;
    vector<int>arr(n);
    for (int i=0; i<n; i++) {
        cin>>arr[i];
        if (arr[i]<m) cout<<arr[i]<<" ";
    }
}