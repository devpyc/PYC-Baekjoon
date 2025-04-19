#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;
    vector<int> arr(n+1);
    vector<int> dp(n+1);
    for (int i = 1; i<n+1; i++) {
        cin >> arr[i];
    }
    dp[1]=arr[1];
    dp[2]=arr[1]+arr[2];
    for (int i=3; i<n+1; i++) {
        dp[i]=max(dp[i-2]+arr[i], dp[i-3]+arr[i-1] + arr[i]);
    }
    cout << dp[n];
}