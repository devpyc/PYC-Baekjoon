#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;
    cin.ignore();

    for (int i = 0; i < n; i++) {
        string s;
        getline(cin, s);

        bool check[26] = {false};

        for (char c : s) {
            if (isalpha(c)) {
                check[tolower(c) - 'a'] = true;
            }
        }

        string ans = "";
        for (int j = 0; j < 26; j++) {
            if (!check[j]) {
                ans += (char)('a' + j);
            }
        }

        if (ans.empty()) cout << "pangram\n";
        else cout << "missing " << ans << "\n";
    }
}