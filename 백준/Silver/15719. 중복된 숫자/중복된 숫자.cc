#include <bits/stdc++.h>
using namespace std;

int main() {
    cin.tie(0)->sync_with_stdio(0);

    long long n,ans=0;
    cin>>n;
    for (int i=0; i<n; i++) {
        long long x;
        cin>>x;
        ans+=x;
    }
    long long res=(n-1)*n/2;
    cout<<ans-res;
}