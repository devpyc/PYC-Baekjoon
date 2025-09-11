#include <bits/stdc++.h>
using namespace std;

int main() {
    cin.tie(0)->sync_with_stdio(0);

    while (true) {
        int n,m;
        cin>>n>>m;
        if (n==0 && m==0) return 0;

        int arr[n];
        for (int i=0; i<n; i++) {
            cin>>arr[i];
        }
        sort(arr,arr+n);
        int cnt=0;
        while (m--) {
            int x;
            cin>>x;
            cnt+=binary_search(arr,arr+n,x);
        }
        cout<<cnt<<"\n";
    }
}