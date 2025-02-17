#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int n, a, b;
    cin >> n >> a >> b;

    int cnt = 0;

    while (a != b) {
        a = (a + 1) / 2;
        b = (b + 1) / 2;
        cnt++;

        if (a == b) {
            cout << cnt << "\n";
            return 0;
        }
    }

    cout << -1 << "\n";
    return 0;
}