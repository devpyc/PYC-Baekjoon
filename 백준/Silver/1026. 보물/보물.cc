#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin>>n;
    int arr1[n],arr2[n];
    for(int i=0; i<n; i++) {
        cin>>arr1[i];
    }
    for(int i=0; i<n; i++) {
        cin>>arr2[i];
    }
    sort(arr1,arr1+n,greater<int>());
    sort(arr2,arr2+n);
    int ans=0;
    for(int i=0; i<n; i++) {
        ans+=(arr1[i]*arr2[i]);
    }
    cout<<ans;
}