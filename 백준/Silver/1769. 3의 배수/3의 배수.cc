#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    
    string x;
    cin >> x;

    int cnt = 0;

    while (x.length() > 1) {
        long long sum = 0;

        for (char digit : x) {
            sum += (digit - '0');
        }

        x = to_string(sum);
        cnt++;
    }

    cout << cnt << "\n";

    int y = x[0] - '0';
    if (y % 3 == 0) {
        cout << "YES";
    } else {
        cout << "NO";
    }
}