#include <bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;

    vector<int> arr(n);
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    int maxL = 0;
    int l = 0;
    int cnt[10] = {0};
    int dist = 0;

    for (int r = 0; r < n; r++) {
        if (cnt[arr[r]] == 0) {
            dist++;
        }
        cnt[arr[r]]++;

        while (dist > 2) {
            cnt[arr[l]]--;
            if (cnt[arr[l]] == 0) {
                dist--;
            }
            l++;
        }

        maxL = max(maxL, r - l + 1);
    }
    cout << maxL << "\n";
}