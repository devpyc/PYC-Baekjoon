#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int n,m;
    cin>>n>>m;
    int ans[100001]={0,};
    for(int i=1; i<=n; i++) {
        int x;
        cin>>x;
        ans[i]=ans[i-1]+x;
    }
    while(m--) {
        int a,b;
        cin>>a>>b;
        cout<<ans[b]-ans[a-1]<<"\n";
    }
}