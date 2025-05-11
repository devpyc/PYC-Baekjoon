#include <bits/stdc++.h>
#define ull unsigned long long
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    ull n;
    cin>>n;

    ull res=-n;
    int mask=63;
    while(mask>=0&&!(res&(1ULL<<mask))) {
        mask--;
    }

    cout<<64-mask;
}