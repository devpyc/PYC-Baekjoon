#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    cin.ignore();

    while(t--) {
        string s;
        getline(cin, s);

        stringstream ss(s);
        string res;
        string ans = "";

        while (ss >> res) {
            int cnt = 0;
            for (char c: res) {
                cnt += (c - 'a');
            }
            int mod = cnt % 27;
            if (mod == 26) ans += ' ';
            else ans += (char) ('a' + mod);
        }
        cout << ans << "\n";
    }
}