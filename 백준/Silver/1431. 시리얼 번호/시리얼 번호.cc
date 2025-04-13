#include <bits/stdc++.h>
using namespace std;

int solve(const string& serial) {
    int s = 0;
    for (char c : serial) {
        if (isdigit(c)) {
            s += (c - '0');
        }
    }
    return s;
}

bool cmp(const string& a, const string& b) {
    if (a.length() != b.length()) {
        return a.length() < b.length();
    }

    int s1 = solve(a);
    int s2 = solve(b);
    if (s1 != s2) {
        return s1 < s2;
    }

    return a < b;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;

    vector<string> arr(n);
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    sort(arr.begin(), arr.end(), cmp);

    for (const string& i : arr) {
        cout<<i<<"\n";
    }
}