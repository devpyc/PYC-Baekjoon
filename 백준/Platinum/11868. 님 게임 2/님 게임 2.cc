#include <bits/stdc++.h>
using namespace std;

int main() {
    cin.tie(0)->sync_with_stdio(0);

    int n;
    cin>>n;

    vector<int>arr(n);
    for (int i=0; i<n; i++) {
        cin>>arr[i];
    }
    int ans=0;

    for (int i:arr) {
        ans^=i;
    }
    cout<<(ans!=0?"koosaga":"cubelover");
}