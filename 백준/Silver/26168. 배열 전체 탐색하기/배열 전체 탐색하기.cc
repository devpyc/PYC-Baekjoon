#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main() {
    cin.tie(0)->sync_with_stdio(0);

    int n,m;
    cin>>n>>m;

    vector<ll>arr(n);
    for (int i=0; i<n; i++) {
        cin>>arr[i];
    }
    sort(arr.begin(),arr.end());

    while (m--) {
        int t;
        cin>>t;
        if (t==1) {
            ll k;
            cin>>k;
            cout<<arr.end()-lower_bound(arr.begin(),arr.end(),k)<<"\n";
        }else if (t==2) {
            ll k;
            cin>>k;
            cout<<arr.end()-upper_bound(arr.begin(),arr.end(),k)<<"\n";
        }else if (t==3) {
            ll i,j;
            cin>>i>>j;
            cout<<upper_bound(arr.begin(),arr.end(),j)-lower_bound(arr.begin(),arr.end(),i)<<"\n";
        }
    }
}