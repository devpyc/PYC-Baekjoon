#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int n;
    cin>>n;
    vector<int>sum(n+1,0);
    for(int i=0; i<n; i++) {
        int x;
        cin>>x;
        sum[i+1]=sum[i]+x;
    }
    int m;
    cin>>m;
    for(int i=0; i<m; i++) {
        int x,y;
        cin>>x>>y;
        cout<<sum[y]-sum[x-1]<<"\n";
    }
}