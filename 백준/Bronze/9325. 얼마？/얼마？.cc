#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int t;
    cin >> t;

    while (t--) {
        int s, n, ans;
        cin >> s;
        cin >> n;

        ans = s;

        for (int i = 0; i < n; i++) {
            int q, p;
            cin >> q >> p;

            ans += q * p;
        }

        cout << ans << "\n";
    }

    return 0;
}