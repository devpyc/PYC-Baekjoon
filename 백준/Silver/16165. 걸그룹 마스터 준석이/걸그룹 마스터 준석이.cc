#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, m;
    cin >> n >> m;

    map<string, vector<string>> mss;
    map<string, string> ms;

    for(int i = 0; i < n; i++) {
        string tn;
        int mc;
        cin >> tn >> mc;

        vector<string> vs;
        for(int j = 0; j < mc; j++) {
            string mn;
            cin >> mn;
            vs.push_back(mn);
            ms[mn] = tn;
        }

        mss[tn] = vs;
    }

    for(int i = 0; i < m; i++) {
        string s;
        int c;
        cin >> s >> c;

        if(c == 0) {
            vector<string> arr = mss[s];
            sort(arr.begin(), arr.end());

            for(const string& m : arr) {
                cout << m << '\n';
            }
        } else {
            cout << ms[s] << '\n';
        }
    }
}