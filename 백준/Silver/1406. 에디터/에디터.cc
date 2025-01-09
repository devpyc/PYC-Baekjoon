#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    string s;
    cin >> s;

    int m;
    cin >> m;

    stack<char> l;
    stack<char> r;

    for(char c : s) {
        l.push(c);
    }

    while (m--) {
        char c;
        cin >> c;

        if (c == 'L') {
            if (!l.empty()) {
                r.push(l.top());
                l.pop();
            }
        }
        else if (c == 'D') {
            if (!r.empty()) {
                l.push(r.top());
                r.pop();
            }
        }
        else if (c == 'B') {
            if (!l.empty()) {
                l.pop();
            }
        }
        else if (c == 'P') {
            char x;
            cin >> x;
            l.push(x);
        }
    }

    while (!l.empty()) {
        r.push(l.top());
        l.pop();
    }

    string ans;
    
    ans.reserve(r.size());
    while (!r.empty()) {
        ans.push_back(r.top());
        r.pop();
    }

    cout << ans << "\n";
    return 0;
}