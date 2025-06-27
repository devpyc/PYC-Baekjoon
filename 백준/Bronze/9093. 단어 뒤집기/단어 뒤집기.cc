#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    cin.ignore();

    for (int i = 0; i < t; i++) {
        string l;
        getline(cin, l);

        stringstream s(l);
        string w;
        string ans;

        while (s >> w) {
            reverse(w.begin(), w.end());
            ans += w + " ";
        }

        if (!ans.empty()) {
            ans.pop_back();
        }

        cout << ans << '\n';
    }
    return 0;
}