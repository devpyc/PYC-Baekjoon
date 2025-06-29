#include <bits/stdc++.h>
#define MOD 1'000'000'007
using namespace std;

int main(){
    cin.tie(0)->sync_with_stdio(0);

    int n;
    cin>>n;
    long long ans=1;
    for (int i=1; i<=n; i++) {
        ans*=i;
    }
    cout<<ans;
}