#include <bits/stdc++.h>
using namespace std;

int main() {
    cin.tie(0)->sync_with_stdio(0);

    int n,m;
    cin>>n>>m;
    int arr[n];
    int sum=0;
    for (int i=0; i<n; i++) {
        cin>>arr[i];
    }
    for (int i=0; i<m; i++) {
        sum+=arr[i];
    }
    int MAX=sum;
    for (int i=m; i<n; i++) {
        sum+=arr[i]-arr[i-m];
        MAX=max(MAX,sum);
    }
    cout<<MAX;
}