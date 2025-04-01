#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    long long n;
    cin>>n;
    long long ans=0;

    while(n>0) {
        ans=(ans<<1)|(n&1);
        n>>=1;
    }
    cout<<ans;
}