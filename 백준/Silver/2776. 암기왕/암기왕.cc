#include <bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin>>t;
    while(t--) {
        int n;
        cin>>n;
        vector<int>a(n);
        for(int i=0; i<n; i++) {
            cin>>a[i];
        }
        sort(a.begin(),a.end());
        int m;
        cin>>m;
        for(int i=0; i<m; i++) {
            int x;
            cin>>x;
            cout<<binary_search(a.begin(),a.end(),x)<<"\n";
        }
    }
}