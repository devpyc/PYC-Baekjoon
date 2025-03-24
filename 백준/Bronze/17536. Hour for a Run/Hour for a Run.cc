#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int v, n;
    cin >> v >> n;

    long long res = static_cast<long long>(v) * n;

    for (int i = 10; i <= 90; i += 10) {
        long long ans = (res * i + 99) / 100;

        cout << ans;
        if (i < 90) cout << " ";
    }
    cout << "\n";
}