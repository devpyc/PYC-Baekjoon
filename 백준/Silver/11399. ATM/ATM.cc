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

    int ans=0;
    for (int i=0; i<n; i++) {
        for (int j=0; j<=i; j++) {
            ans+=arr[j];
        }
    }
    cout<<ans;
}