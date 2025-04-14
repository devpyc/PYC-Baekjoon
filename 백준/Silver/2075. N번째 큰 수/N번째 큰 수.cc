#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin>>n;
    int arr[n*n];
    for(int i=0; i<n*n; i++) {
        cin>>arr[i];
    }
    sort(arr,arr+n*n);
    cout<<arr[n*n-n];
}