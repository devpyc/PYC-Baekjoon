#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, m;
    cin >> n >> m;

    vector<long long> arr(n);
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    sort(arr.begin(), arr.end());

    for (int i = 0; i < m; i++) {
        int c;
        cin >> c;

        if (c == 1) {
            long long k;
            cin >> k;

            auto it = lower_bound(arr.begin(), arr.end(), k);
            cout << arr.end() - it << "\n";
        } else if (c == 2) {
            long long k;
            cin >> k;

            auto it = upper_bound(arr.begin(), arr.end(), k);
            cout << arr.end() - it << "\n";
        } else if (c == 3) {
            long long i, j;
            cin >> i >> j;
            auto lower = lower_bound(arr.begin(), arr.end(), i);
            auto upper = upper_bound(arr.begin(), arr.end(), j);
            cout << upper - lower << "\n";
        }
    }
}