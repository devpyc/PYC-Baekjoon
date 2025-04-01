#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, m;
    cin >> n >> m;

    vector<vector<int>> arr(n, vector<int>(m));
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            cin >> arr[i][j];
        }
    }

    int q;
    cin >> q;

    for (int i = 0; i < q; i++) {
        vector<int> query(m);
        for (int j = 0; j < m; j++) {
            cin >> query[j];
        }
        int cnt = 0;
        for (int k = 0; k < n; k++) {
            bool check = true;
            for (int j = 0; j < m; j++) {
                if (query[j] != -1 && query[j] != arr[k][j]) {
                    check = false;
                    break;
                }
            }
            if (check) {
                cnt++;
            }
        }
        cout << cnt << "\n";
    }
}