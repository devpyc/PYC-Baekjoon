#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, m;
    cin >> n >> m;

    vector<int> arr(n);

    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    int l = 0, r = 0, sum = 0, ans = 0;

    while (l <= r) {
        if (sum == m) {
            ans++;
        }
        if (sum >= m) {
            sum -= arr[l];
            l++;
        } else if (r >= n) break;
        else {
            sum += arr[r];
            r++;
        }
    }
    cout << ans << "\n";
}