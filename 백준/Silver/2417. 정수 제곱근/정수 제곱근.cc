#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    ll n;
    cin>>n;

    ll ans=sqrt(n);
    if(ans*ans<n) {
        ++ans;
    }
    cout<<ans;
}