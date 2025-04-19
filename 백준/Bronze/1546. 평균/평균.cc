#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin>>n;
    double arr[n];
    for(int i=0; i<n; i++) {
        cin>>arr[i];
    }
    sort(arr,arr+n);

    double ans=0;
    for(int i=0; i<n; i++) {
        ans+=(arr[i]/arr[n-1])*100;
    }
    cout.precision(10);
    cout<<fixed;
    cout<<ans/n;
}