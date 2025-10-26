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
    int x;
    cin>>x;
    int l=0,r=n-1;
    int cnt=0;
    while (l<r) {
        int sum=arr[l]+arr[r];
        if (sum==x) {
            cnt++;
            l++;
        }else if (sum>x) {
            r--;
        }else {
            l++;
        }
    }
    cout<<cnt;
}