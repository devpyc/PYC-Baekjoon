#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin>>n;
    int arr[n];
    for(int i=0; i<n; i++) {
        cin>>arr[i];
    }
    sort(arr,arr+n);
    int m;
    cin>>m;
    for(int i=0; i<m; i++) {
        int x;
        cin>>x;
        cout<<binary_search(arr,arr+n,x)<<" ";
    }
}