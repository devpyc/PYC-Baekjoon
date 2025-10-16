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
    int m;
    cin>>m;
    while (m--) {
        int x;
        cin>>x;
        cout<<binary_search(arr,arr+n,x)<<"\n";
    }
}