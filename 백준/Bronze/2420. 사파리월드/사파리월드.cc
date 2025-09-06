#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main() {
    cin.tie(0)->sync_with_stdio(0);

    ll n,m;
    cin>>n>>m;
    n-=m;
    cout<<abs(n);
}