#include <bits/stdc++.h>
using namespace std;

int arr[100001];

int main() {
    cin.tie(0)->sync_with_stdio(0);

    int n,m;
    cin>>n>>m;
    for (int i=0; i<n; i++) {
        cin>>arr[i];
    }
    sort(arr,arr+n);

    int ans=2e9;
    int l=0,r=1;
    while (r<n) {
        int sum=arr[r]-arr[l];
        if (sum<m) {
            r++;
            continue;
        }else if (sum==m) {
            ans=sum;
            break;
        }
        l++;
        ans=min(ans,sum);
    }
    cout<<ans;
}