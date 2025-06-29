#include <bits/stdc++.h>
using namespace std;

int main(){
    cin.tie(0)->sync_with_stdio(0);

    long long n;
    cin>>n;
    long long ans=static_cast<long long>(sqrt(n));
    if (ans*ans<n) ans++;
    cout<<ans;
}