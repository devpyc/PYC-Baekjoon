#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int a, b;
    int c = 0;
    int ans = 0;

    for (int i = 0; i < 10; i++) {
        cin >> a >> b;
        c -= a;
        c += b;

        if (c > ans) {
            ans = c;
        }
    }

    cout << ans << "\n";

    return 0;
}