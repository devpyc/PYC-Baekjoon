#include <bits/stdc++.h>
using namespace std;

int main() {
    cin.tie(0)->sync_with_stdio(0);

    int t;
    cin>>t;
    while (t--) {
        string n;
        cin>>n;

        vector<char>l,r;
        l.reserve(n.size());
        r.reserve(n.size());

        for (char c:n) {
            if (c=='<') {
                if (!l.empty()) {
                    r.push_back(l.back());
                    l.pop_back();
                }
            }
            else if (c=='>') {
                if (!r.empty()) {
                    l.push_back(r.back());
                    r.pop_back();
                }
            }
            else if (c=='-') {
                if (!l.empty()) {
                    l.pop_back();
                }
            }
            else {
                l.push_back(c);
            }
        }

        for (char c:l) {
            cout<<c;
        }
        for (auto it = r.rbegin(); it != r.rend(); ++it) {
            cout<<*it;
        }
        cout<<"\n";
    }

    return 0;
}