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

    vector<int> ans(n, 0);

    for (int i = 1; i <= n; i++) {
        int cnt = arr[i-1];
        for (int j = 0; j < n; j++) {
            if (ans[j] != 0) continue;
            if (cnt == 0) {
                ans[j] = i;
                break;
            }
            cnt--;
        }
    }
    for (int i = 0; i < n; i++) {
        cout << ans[i] << " ";
    }
}