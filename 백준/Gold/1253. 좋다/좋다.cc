#include <bits/stdc++.h>
using namespace std;

int main() {
    cin.tie(0)->sync_with_stdio(0);

    int n,cnt=0;
    cin>>n;

    int arr[n];
    for (int i=0; i<n; i++) {
        cin>>arr[i];
    }

    sort(arr,arr+n);

    for (int i=0; i<n; i++) {
        bool check=false;
        int l=0,r=n-1;
        while (l<r) {
            if (l==i) {
                l++;
                continue;
            }

            if (r==i) {
                r--;
                continue;
            }

            int sum=arr[l]+arr[r];
            if (sum==arr[i]) {
                check=true;
                break;
            } else if (sum<arr[i]) {
                l++;
            } else {
                r--;
            }
        }
        cnt+=(check);
    }
    cout<<cnt;
}