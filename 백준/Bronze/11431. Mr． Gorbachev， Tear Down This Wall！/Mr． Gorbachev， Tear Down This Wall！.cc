#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;

    for (int i = 1; i <= t; i++) {
        int n, s, p;
        cin >> n >> s >> p;

        vector<pair<int, int>> arr(n + 1);
        for (int j = 0; j <= n; j++) {
            cin >> arr[j].first >> arr[j].second;
        }

        double res = 0;
        for (int j = 0; j < n; j++) {
            res += abs(arr[j+1].first - arr[j].first) + abs(arr[j+1].second - arr[j].second);
        }

        double ans = (res * s) / p;

        cout << "Data Set " << i << ":\n" << (int)ceil(ans) << "\n\n";
    }
}