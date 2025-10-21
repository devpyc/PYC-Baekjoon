#include <bits/stdc++.h>
using namespace std;

int main() {
    cin.tie(0)->sync_with_stdio(0);

    int n,m;
    cin>>n>>m;

    int arr[n];
    for (int i=0; i<n; i++) {
        cin>>arr[i];
    }
    sort(arr,arr+n);

    int l=0,r=n-1;
    int cnt=0;
    while (l<r) {
        int sum=arr[l]+arr[r];
        if (sum==m) {
            cnt++;
            l++;
            r--;
        }
        else if (sum>m) r--;
        else l++;
    }
    cout<<cnt;
}