#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int n,p;
    cin>>n>>p;

    if(n>=p) {
        cout<<0<<"\n";
    }else {
        long long ans=1;
        for(int i=1; i<=n; i++) {
            ans=(ans*i)%p;
        }
        cout<<ans<<"\n";
    }
}