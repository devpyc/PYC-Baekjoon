#include <bits/stdc++.h>
using namespace std;

int solve(string s) {
    int cnt = 0;
    while (cnt < s.length() && s[cnt] == '!') {
        cnt++;
    }

    if (cnt >= s.length()) {
        return 0;
    }
    int n = s[cnt] - '0';

    int ans = 0;
    for (int i = cnt + 1; i < s.length(); i++) {
        if (s[i] == '!') {
            ans++;
        }
    }

    for (int i = 0; i < ans; i++) {
        n = 1;
    }

    for (int i = 0; i < cnt; i++) {
        n = 1 - n;
    }

    return n;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;

    for (int i = 0; i < t; i++) {
        string s;
        cin >> s;
        cout << solve(s) << "\n";
    }
}