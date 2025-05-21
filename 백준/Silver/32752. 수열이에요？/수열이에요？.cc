#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int n,l,r;
    cin>>n>>l>>r;
    int arr[n];
    int ans[n];
    for(int i=0; i<n; i++) {
        cin>>arr[i];
        ans[i]=arr[i];
    }
    sort(arr+l-1,arr+r);
    sort(ans,ans+n);
    for(int i=0; i<n; i++) {
        if(arr[i]!=ans[i]) {
            cout<<0;
            return 0;
        }
    }
    cout<<1;

}