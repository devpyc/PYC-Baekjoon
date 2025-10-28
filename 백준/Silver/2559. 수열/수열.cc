#include <bits/stdc++.h>
using namespace std;

int main() {
    cin.tie(0)->sync_with_stdio(0);

    int n,k;
    cin>>n>>k;

    vector<int>arr(n);
    for (int i=0; i<n; i++) {
        cin>>arr[i];
    }

    int sum=0;
    for (int i=0; i<k; i++) {
        sum+=arr[i];
    }

    int m=sum;

    for (int i=k; i<n; i++) {
        sum+=arr[i]-arr[i-k];
        if (sum>m) {
            m=sum;
        }
    }
    cout<<m;
}