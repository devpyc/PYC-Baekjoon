#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, k;
    cin >> n >> k;
    vector<ll> arr(n);
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    int cnt = 0;

    for (int a = n - 1; a >= 1; a--) {
        int idx = 0;
        for (int i = 1; i <= a; i++) {
            if (arr[i] > arr[idx]) {
                idx = i;
            }
        }
        if (a != idx) {
            swap(arr[a], arr[idx]);
            cnt++;
            
            if (cnt == k) {
                for (int i = 0; i < n; i++) {
                    cout << arr[i] << " ";
                }
                return 0;
            }
        }
    }
    cout << -1;
}