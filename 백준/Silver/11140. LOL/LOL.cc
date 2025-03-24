#include <bits/stdc++.h>
using namespace std;

int solve(const string &s, const string &t) {
    int n = s.size(), m = t.size();
    vector<vector<int>> dp(n + 1, vector<int>(m + 1, 0));

    for (int i = 0; i <= n; i++) dp[i][0] = i;
    for (int j = 0; j <= m; j++) dp[0][j] = j;

    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= m; j++) {
            int cost = (s[i - 1] == t[j - 1]) ? 0 : 1;
            dp[i][j] = min({dp[i - 1][j] + 1, dp[i][j - 1] + 1, dp[i - 1][j - 1] + cost});
        }
    }
    return dp[n][m];
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;

    while(t--){
        string s;
        cin >> s;

        if(s.find("lol") != string::npos) {
            cout << 0 << "\n";
            continue;
        }

        int ans = 3;
        int n = s.size();

        for (int i = 0; i <= n; i++) {
            for (int j = i; j <= n; j++) {
                string sub = s.substr(i, j - i);
                int d = solve(sub, "lol");
                ans = min(ans, d);
            }
        }
        cout << ans << "\n";
    }
}