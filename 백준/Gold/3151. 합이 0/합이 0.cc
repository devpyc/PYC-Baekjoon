#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main() {
    cin.tie(0)->sync_with_stdio(0);

    int n;
    cin >> n;
    vector<ll> arr(n);
    for (auto &x: arr) {
        cin >> x;
    }
    sort(arr.begin(), arr.end());

    ll cnt = 0;
    for (int i = 0; i < n - 2; i++) {
        int l = i + 1, r = n - 1;
        while (l < r) {
            ll sum = arr[i] + arr[l] + arr[r];
            if (sum == 0) {
                if (arr[l] == arr[r]) {
                    ll num = r - l + 1;
                    cnt += num * (num - 1) / 2;
                    break;
                } else {
                    ll lv = arr[l], rv = arr[r];
                    ll cL = 0, cR = 0;
                    while (l < r && arr[l] == lv) {
                        l++;
                        cL++;
                    }
                    while (r >= l && arr[r] == rv) {
                        r--;
                        cR++;
                    }
                    cnt += cL * cR;
                }
            } else if (sum < 0) {
                l++;
            } else {
                r--;
            }
        }
    }
    cout << cnt;
}