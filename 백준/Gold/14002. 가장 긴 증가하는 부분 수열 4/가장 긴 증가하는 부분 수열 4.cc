#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;

    vector<int> arr(n);
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    vector<int> dp(n, 1);
    vector<int> prev(n, -1);

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < i; j++) {
            if (arr[j] < arr[i] && dp[i] < dp[j] + 1) {
                dp[i] = dp[j] + 1;
                prev[i] = j;
            }
        }
    }

    int len = 0;
    int idx = 0;

    for (int i = 0; i < n; i++) {
        if (len < dp[i]) {
            len = dp[i];
            idx = i;
        }
    }

    vector<int> lis;
    while (idx != -1) {
        lis.push_back(arr[idx]);
        idx = prev[idx];
    }

    reverse(lis.begin(), lis.end());

    cout << len << endl;
    for (int ans : lis) {
        cout << ans << " ";
    }
}