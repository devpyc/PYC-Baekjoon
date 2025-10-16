#include <bits/stdc++.h>
using namespace std;

int main() {
    cin.tie(0)->sync_with_stdio(0);

    int x;
    string s;
    cin >> x >> s;
    int m = 0, w = 0;

    while (!s.empty()) {
        char a = s[0];
        char b = s.size() > 1 ? s[1] : 0;

        if (a == 'M' && abs(m + 1 - w) <= x) {
            m++;
            s.erase(s.begin());
        } else if (a == 'W' && abs(m - (w + 1)) <= x) {
            w++;
            s.erase(s.begin());
        } else if (b == 'M' && abs(m + 1 - w) <= x) {
            m++;
            s.erase(s.begin() + 1);
        } else if (b == 'W' && abs(m - (w + 1)) <= x) {
            w++;
            s.erase(s.begin() + 1);
        } else break;
    }
    cout << m + w;
}