#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int n,k;
    cin>>n>>k;

    vector<int>arr(n);
    for(int i=0; i<n; i++) {
        cin>>arr[i];
    }
    int cnt=0;
    for(int i=n-1; i>=0; i--) {
        if(k==0) break;

        int ans=k/arr[i];
        cnt+=ans;
        k-=ans*arr[i];
    }
    cout<<cnt;
}