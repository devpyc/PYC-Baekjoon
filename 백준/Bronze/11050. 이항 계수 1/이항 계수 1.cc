#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int n,k;
    cin>>n>>k;
    if(k>n-k) k=n-k;

    long long ans=1;
    for(int i=0; i<k; i++) {
        ans*=(n-i);
        ans/=(i+1);
    }
    cout<<ans;
}