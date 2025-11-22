#include <bits/stdc++.h>
using namespace std;

int main() {
    cin.tie(0)->sync_with_stdio(0);

    int n;
    cin>>n;
    vector<int>a(n);
    for (int i=0; i<n; i++) {
        cin>>a[i];
    }
    vector<int>lis(n,1),lds(n,1);
    for (int i=0; i<n; i++) {
        for (int j=0; j<i; j++) {
            if (a[j]<a[i]) lis[i]=max(lis[i],lis[j]+1);
        }
    }

    for (int i=n-1; i>=0; i--) {
        for (int j=n-1; j>i; j--) {
            if (a[j]<a[i]) lds[i]=max(lds[i],lds[j]+1);
        }
    }
    int ans=0;
    for (int i=0; i<n; i++) {
        ans=max(ans,lis[i]+lds[i]-1);
    }
    cout<<ans;
}