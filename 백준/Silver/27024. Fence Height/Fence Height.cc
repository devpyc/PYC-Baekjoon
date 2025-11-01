#include <bits/stdc++.h>
using namespace std;

int main() {
    cin.tie(0)->sync_with_stdio(0);

    int n;
    cin>>n;
    int arr[n];
    for (int i=0; i<n; i++) {
        cin>>arr[i];
    }
    sort(arr,arr+n);
    int l=0,r=0;
    int ans=INT_MAX,m=n/2+1;
    while (r<n) {
        int sum=r-l+1;
        if (sum>=m) {
            ans=min(ans,arr[r]-arr[l]);
            l++;
        }else r++;
    }
    cout<<ans;
}