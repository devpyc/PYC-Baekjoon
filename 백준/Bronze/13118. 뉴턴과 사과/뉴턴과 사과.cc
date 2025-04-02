#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int arr[4];
    int x, y, r;

    for (int i = 0; i < 4; i++) {
        cin >> arr[i];
    }

    cin >> x >> y >> r;

    int ans = 0;
    for (int i = 0; i < 4; i++) {
        if (arr[i] == x) {
            ans = i + 1;
            break;
        }
    }
    cout << ans << "\n";
}