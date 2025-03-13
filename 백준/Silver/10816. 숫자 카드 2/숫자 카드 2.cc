#include <bits/stdc++.h>
using namespace std;

int n,m;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    
    cin>>n;

    int a[n];
    for(int i=0; i<n; i++) {
        cin>>a[i];
    }

    sort(a,a+n);

    cin>>m;

    for(int i=0; i<m; i++) {
        int x;
        cin>>x;

        cout<<upper_bound(a,a+n,x)-lower_bound(a,a+n,x)<<" ";
    }
}