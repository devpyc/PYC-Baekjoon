#include <bits/stdc++.h>
#define MAX 100'000
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int d;
    cin >> d;

    vector<int> arr(d);
    for (int i = 0; i < d; i++) {
        cin >> arr[i];
    }

    long long ans = 100;

    for (int i = 0; i < d - 1; i++) {
        if (arr[i] < arr[i+1]) {
            long long res = ans / arr[i];
            if (res > MAX) res = MAX;
            ans = ans - res * arr[i];

            ans += res * arr[i+1];
        }
    }
    cout << ans << "\n";
}