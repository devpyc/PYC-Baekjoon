#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;

    while (t--) {
        int tt;
        cin >> tt;

        vector<int> h(20);
        for (int i = 0; i < 20; i++) {
            cin >> h[i];
        }

        vector<int> res = h;
        sort(res.begin(), res.end());

        map<int, int> hr;
        for (int i = 0; i < 20; i++) {
            hr[res[i]] = i + 1;
        }

        vector<int> r(20);
        for (int i = 0; i < 20; i++) {
            r[i] = hr[h[i]];
        }

        long long cnt = 0;
        for (int i = 0; i < 20; i++) {
            for (int j = i + 1; j < 20; j++) {
                if (r[i] > r[j]) {
                    cnt++;
                }
            }
        }

        cout << tt << " " << cnt << "\n";
    }

    return 0;
}