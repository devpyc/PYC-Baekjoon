#include <bits/stdc++.h>
using namespace std;

int main() {
    cin.tie(0)->sync_with_stdio(0);

    int t;
    cin>>t;
    while (t--) {
        int n,m;
        cin>>n>>m;
        int arr[n];
        for (int i=0; i<n; i++) {
            cin>>arr[i];
        }
        sort(arr,arr+n);

        int l=0,r=n-1,cnt=0,MIN=2e8;
        while (l<r) {
            int sum=arr[l]+arr[r];
            if (sum==m) {
                l++;
                r--;
            }
            else if (sum>m) r--;
            else l++;

            if (MIN==abs(m-sum)) cnt++;
            if (abs(m-sum)<MIN) {
                MIN=abs(m-sum);
                cnt=1;
            }
        }
        cout<<cnt<<"\n";
    }
}