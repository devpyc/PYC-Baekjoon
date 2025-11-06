#include <bits/stdc++.h>
using namespace std;

int main() {
    cin.tie(0)->sync_with_stdio(0);

    int n,l;
    cin>>n>>l;
    int arr[n];
    int sum=0;
    for (int i=0; i<n; i++) {
        cin>>arr[i];
    }
    int cnt=0;
    for (int i=0; i<l; i++) {
        sum+=arr[i];
        if (sum>=129&&sum<=138) cnt++;
    }
    for (int i=l; i<n; i++) {
        sum+=arr[i]-arr[i-l];
        if (sum>=129&&sum<=138) cnt++;
    }
    cout<<cnt;
}