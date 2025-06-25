#include<bits/stdc++.h>
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
    while (m--) {
        int x;
        cin>>x;
        (binary_search(arr,arr+n,x))?cout<<lower_bound(arr,arr+n,x)-arr:cout<<-1;
        cout<<"\n";
    }
}