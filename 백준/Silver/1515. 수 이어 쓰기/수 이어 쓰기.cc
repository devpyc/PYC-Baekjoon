#include <bits/stdc++.h>
using namespace std;

bool solve(const string& s, int n) {
    int j = 0;
    for (int i = 1; i <= n && j < s.size(); i++) {
        string num = to_string(i);
        for (char c : num) {
            if (j < s.size() && c == s[j]) {
                j++;
            }
        }
    }
    return j == s.size();
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    
    string s;
    cin >> s;

    int ans = 1, res = 100000;

    while (ans <= res) {
        int mid = ans + (res - ans) / 2;
        if (solve(s, mid)) {
            res = mid - 1;
        } else {
            ans = mid + 1;
        }
    }
    cout << ans << "\n";
}