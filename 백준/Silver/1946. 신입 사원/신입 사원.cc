#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;

        vector<pair<int, int>> arr(n);
        for (int i = 0; i < n; i++) {
            cin >> arr[i].first >> arr[i].second;
        }

        sort(arr.begin(), arr.end());

        int cnt = 1;
        int res = arr[0].second;

        for (int i = 1; i < n; i++) {
            if (arr[i].second < res) {
                cnt++;
                res = arr[i].second;
            }
        }
        cout << cnt << "\n";
    }
}