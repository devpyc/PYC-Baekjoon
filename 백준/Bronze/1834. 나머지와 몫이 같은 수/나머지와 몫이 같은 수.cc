#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    long long n;
    cin >> n;

    long long ans = 0;

    for(long long i = 0; i < n; i++) {
        ans += (n * i + i);
    }

    cout << ans;

    return 0;
}