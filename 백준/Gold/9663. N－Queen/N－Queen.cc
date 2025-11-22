#include <bits/stdc++.h>
using namespace std;

int n,ans;

void solve(int r, int c, int d1, int d2) {
    if (r==n) {
        ans++;
        return;
    }
    int res=((1<<n)-1)&~(c|d1|d2);
    while (res) {
        int i=res&-res;
        res-=i;
        solve(r+1,c|i,(d1|i)<<1,(d2|i)>>1);
    }
}

int main() {
    cin.tie(0)->sync_with_stdio(0);

    cin>>n;
    solve(0,0,0,0);
    cout<<ans;
}