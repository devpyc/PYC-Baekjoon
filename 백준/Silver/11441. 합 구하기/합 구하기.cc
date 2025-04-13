#include <bits/stdc++.h>
using namespace std;
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin>>n;
    vector<int>ans(n,0);
    for(int i=1; i<=n; i++) {
        int x;
        cin>>x;
        ans[i]=ans[i-1]+x;
    }

    int t;
    cin>>t;
    while(t--) {
        int i,j;
        i--; j--;
        cin>>i>>j;
        cout<<ans[j]-ans[i-1]<<"\n";
    }
}