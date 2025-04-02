#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin>>t;

    while(t--) {
        ll a,b;
        cin>>a>>b;

        ll ans=(a/b)*(a/b);
        cout<<ans<<"\n";
    }
}