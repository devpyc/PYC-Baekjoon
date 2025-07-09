#include <bits/stdc++.h>
using namespace std;

int main() {
    cin.tie(0)->sync_with_stdio(0);

    int n;
    cin>>n;
    if (n==1) {
        int x;
        cin>>x;
        cout<<x;
        return 0;
    }
    int arr[n];
    for (int i=0; i<n; i++) {
        cin>>arr[i];
    }
    sort(arr,arr+n);

    cout<<arr[(n-1)/2];
}