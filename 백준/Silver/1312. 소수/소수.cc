#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int a, b, n;
    cin >> a >> b >> n;

    int r = a % b;

    for(int i = 0; i < n-1; i++) {
        r *= 10;
        r %= b;
    }

    r *= 10;
    int ans = r / b;

    cout << ans;
}