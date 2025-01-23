#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int k;
    cin >> k;

    for(int i = 0; i < k; i++) {
        int n;
        cin >> n;
        vector<int> arr(n);

        for(int j = 0; j < n; j++) {
            cin >> arr[j];
        }

        sort(arr.begin(), arr.end());

        int maxGap = 0;
        for(int j = 1; j < n; j++) {
            maxGap = max(maxGap, arr[j] - arr[j-1]);
        }

        cout << "Class " << i+1 << "\n";
        cout << "Max " << arr[n-1] << ", Min " << arr[0] << ", Largest gap " << maxGap << "\n";
    }

    return 0;
}