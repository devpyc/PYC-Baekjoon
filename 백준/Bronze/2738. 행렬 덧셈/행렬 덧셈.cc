#include <bits/stdc++.h>
using namespace std;

int main() {
    cin.tie(0)->sync_with_stdio(0);

    int n,m;
    cin>>n>>m;
    int a[n][m];

    for (int i=0; i<n; i++) {
        for (int j=0; j<m; j++) {
            cin>>a[i][j];
        }
    }
    for (int i=0; i<n; i++) {
        for (int j=0; j<m; j++) {
            int x;
            cin>>x;
            a[i][j]+=x;
        }
    }
    for (int i=0; i<n; i++) {
        for (int j=0; j<m; j++) {
            cout<<a[i][j]<<" ";
        }
        cout<<"\n";
    }
}