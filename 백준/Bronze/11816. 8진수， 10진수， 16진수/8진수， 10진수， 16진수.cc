#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    string x;
    cin >> x;

    int ans = 0;

    if (x.length() >= 2 && x[0] == '0' && x[1] == 'x') ans = stoi(x, nullptr, 16);
    else if (x.length() >= 1 && x[0] == '0') ans = stoi(x, nullptr, 8);
    else ans = stoi(x, nullptr, 10);
    cout << ans;
}