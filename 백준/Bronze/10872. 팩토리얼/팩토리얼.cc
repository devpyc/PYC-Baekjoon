#include <bits/stdc++.h>
using namespace std;

int main() {
    cin.tie(0)->sync_with_stdio(0);

    long long ans=1;
    int n;
    cin>>n;
    for (int i=1; i<=n; i++) {
        ans*=i;
    }
    cout<<ans;
}