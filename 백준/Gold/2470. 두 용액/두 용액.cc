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
    int l=0,r=n-1;
    int a,b;
    int MIN=INT_MAX;
    while (l<r) {
        int sum=arr[l]+arr[r];
        if (abs(sum)<MIN) {
            a=l,b=r;
            MIN=abs(sum);
        }

        if (sum==0) break;
        else if (sum<0) l++;
        else r--;
    }
    cout<<arr[a]<<" "<<arr[b];
}