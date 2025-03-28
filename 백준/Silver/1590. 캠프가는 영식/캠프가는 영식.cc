#include <bits/stdc++.h>
using namespace std;

bool check(int a, int b, int c, int d) {
    if (d < a) {
        return false;
    }

    int res = a + (c - 1) * b;

    if (d > res) {
        return false;
    }

    return true;
}

int solve(int a, int b, int c, int d) {
    if (d <= a) {
        return a;
    }

    int res = (d - a + b - 1) / b;

    if (res < c) {
        return a + res * b;
    }

    return -1;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, t;
    cin >> n >> t;

    int ans = INT_MAX;
    bool cam = false;

    for (int i = 0; i < n; i++) {
        int a, b, c;
        cin >> a >> b >> c;

        int res = solve(a, b, c, t);

        if (res != -1) {
            cam = true;
            ans = min(ans, res - t);
        }
    }

    if (cam) {
        cout << ans << "\n";
    } else {
        cout << -1 << "\n";
    }
}