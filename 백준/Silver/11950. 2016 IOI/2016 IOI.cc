#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, m;
    cin >> n >> m;

    vector<string> arr(n);
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    int ans = INT_MAX;


    for (int i = 1; i < n - 1; i++) {
        for (int j = i + 1; j < n; j++) {
            int cnt = 0;

            for (int r = 0; r < i; r++) {
                for (int c = 0; c < m; c++) {
                    if (arr[r][c] != 'W') cnt++;
                }
            }

            for (int r = i; r < j; r++) {
                for (int c = 0; c < m; c++) {
                    if (arr[r][c] != 'B') cnt++;
                }
            }

            for (int r = j; r < n; r++) {
                for (int c = 0; c < m; c++) {
                    if (arr[r][c] != 'R') cnt++;
                }
            }
            ans = min(ans, cnt);
        }
    }
    cout << ans << "\n";
}