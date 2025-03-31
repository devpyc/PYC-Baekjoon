#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;

    set<string> ss;

    while (n--) {
        string s;
        cin >> s;

        vector<string> arr;

        arr.push_back(s);
        for (size_t i = 1; i < s.length(); i++) {
            rotate(s.begin(), s.begin() + 1, s.end());
            arr.push_back(s);
        }
        string ans = *min_element(arr.begin(), arr.end());
        ss.insert(ans);
    }
    cout << ss.size() << "\n";
}