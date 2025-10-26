#include <bits/stdc++.h>
using namespace std;

int main() {
    cin.tie(0)->sync_with_stdio(0);

    int t;
    cin>>t;
    for (int i=1; i<=t; i++) {
        int n,m;
        cin>>n>>m;
        int arr[n];
        for (int i=0; i<n; i++) {
            cin>>arr[i];
        }

        int l=0,r=n-1;
        int cnt=0;
        while (l<r) {
            int sum=arr[l]+arr[r];
            if (sum==m) {
                cnt++;
                l++;
            }else if (sum>m) {
                r--;
            }else {
                l++;
            }
        }
        cout<<"Case #"<<i<<": "<<cnt<<"\n";
    }
}