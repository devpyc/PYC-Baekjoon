#include <bits/stdc++.h>
#define ll long long
#define MOD 1000000007
using namespace std;

map<long long,long long> m;

ll fibo(ll x){
    if(m[x]) return m[x];

    ll ans;
    if(x%2==0) {
        ans=(fibo(x/2)*(fibo(x/2+1)+fibo(x/2-1)))%MOD;
    } else {
        ans=((fibo((x+1)/2)*fibo((x+1)/2))%MOD)+((fibo((x-1)/2)*fibo((x-1)/2))%MOD)%MOD;
    }
    return m[x]=ans%MOD;
}

int main() {
    cin.tie(0)->sync_with_stdio(0);

    ll n;
    cin>>n;
    m[0]=0;
    m[1]=1;
    m[2]=1;

    cout<<fibo(n);
}