#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int n,m;
    cin>>n>>m;

    int arr[n];
    for(int i=0; i<n; i++) {
        cin>>arr[i];
    }
    sort(arr,arr+n);

    int l=0,r=n-1;
    int cnt=0;
    while(l<r) {
        int ans=arr[l]+arr[r];
        if(ans==m) {
            cnt++;
            l++;
            r--;
        }else if(ans<m) l++;
        else r--;
    }
    cout<<cnt;
}