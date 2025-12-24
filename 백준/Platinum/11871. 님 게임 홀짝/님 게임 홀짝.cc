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
    int a;
    for (int i:arr) {
        if (i%2==0) {
            a=i/2-1;
        }else {
            a=(i+1)/2;
        }
        ans^=a;
    }
    cout<<(ans!=0?"koosaga":"cubelover");
}