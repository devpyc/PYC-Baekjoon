#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, p;
    cin >> n >> p;

    map<int, int> arr;

    int x = n;
    arr[x] = 0;

    int cnt = 0;
    while (true) {
        cnt++;
        x = (x * n) % p;

        if (arr.find(x) != arr.end()) {
            cout << cnt - arr[x] << endl;
            break;
        }
        arr[x] = cnt;
    }
}