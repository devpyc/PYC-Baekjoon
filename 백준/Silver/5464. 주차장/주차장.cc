#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, m;
    cin >> n >> m;

    vector<int> arr1(n + 1);
    for (int i = 1; i <= n; i++) {
        cin >> arr1[i];
    }

    vector<int> arr2(m + 1);
    for (int i = 1; i <= m; i++) {
        cin >> arr2[i];
    }

    vector<bool> check(n + 1, false);
    vector<int> pos(m + 1, 0);
    queue<int> q;

    int ans = 0;

    for (int i = 0; i < 2 * m; i++) {
        int idx;
        cin >> idx;

        if (idx > 0) {
            int res = 0;
            for (int j = 1; j <= n; j++) {
                if (!check[j]) {
                    res = j;
                    break;
                }
            }

            if (res > 0) {
                check[res] = true;
                pos[idx] = res;
            } else {
                q.push(idx);
            }
        } else {
            idx = -idx;
            int res = pos[idx];

            ans += arr2[idx] * arr1[res];

            check[res] = false;

            if (!q.empty()) {
                int cur = q.front();
                q.pop();

                check[res] = true;
                pos[cur] = res;
            }
        }
    }
    cout << ans;
}