#include <bits/stdc++.h>
using namespace std;

int main() {
    cin.tie(0)->sync_with_stdio(0);

    int m;
    cin>>m;
    long long sum=0,xr=0;
    while (m--) {
        int t;
        cin>>t;
        if (t==1) {
            long long x;
            cin>>x;
            sum+=x;
            xr^=x;
        }else if (t==2) {
            long long x;
            cin>>x;
            sum-=x;
            xr^=x;
        }else if (t==3) {
            cout<<sum<<"\n";
        }else{
            cout<<xr<<"\n";
        }
    }
}
