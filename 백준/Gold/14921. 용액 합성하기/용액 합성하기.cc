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
    if (n==2) {
        cout<<arr[0]+arr[1];
        return 0;
    }

    int l=0,r=n-1;
    int MIN=2e8,ans=0;
    while (l<r) {
        int sum=arr[l]+arr[r];
        if (abs(sum)<MIN) {
            MIN=abs(sum);
            ans=sum;
        }
        if (sum==0) break;
        else if (sum<0) l++;
        else r--;
    }
    cout<<ans;
}