#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    long long n;
    long long ans=1;
    cin>>n;
    while(n) {
        ans*=n-1;
        n-=2;
    }
    cout<<ans;
}