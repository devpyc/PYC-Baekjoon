#include <bits/stdc++.h>
#define INF 10'000'000'000'000
using namespace std;

int n;
long long ans = 0;

int main(){

    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    cin>>n;

    for(int i = 1; i <= n; ++i){
        ans += (n / i) * i;
    }
    cout << ans;
}