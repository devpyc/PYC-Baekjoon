#include <bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, m, k;
    cin >> n >> m >> k;
    vector<string> arr(n);
    for (int i = 0; i < n; i++){
        cin >> arr[i];
    }

    vector<vector<int>> white(n, vector<int>(m, 0));
    vector<vector<int>> black(n, vector<int>(m, 0));

    for (int i = 0; i < n; i++){
        for (int j = 0; j < m; j++){
            char c = arr[i][j];

            if((i+j) % 2 == 0){
                white[i][j] = (c == 'W') ? 0 : 1;
                black[i][j] = (c == 'B') ? 0 : 1;
            } else {
                white[i][j] = (c == 'B') ? 0 : 1;
                black[i][j] = (c == 'W') ? 0 : 1;
            }
        }
    }

    vector<vector<int>> White(n+1, vector<int>(m+1, 0));
    vector<vector<int>> Black(n+1, vector<int>(m+1, 0));

    for (int i = 1; i <= n; i++){
        for (int j = 1; j <= m; j++){
            White[i][j] = White[i-1][j] + White[i][j-1] - White[i-1][j-1] + white[i-1][j-1];
            Black[i][j] = Black[i-1][j] + Black[i][j-1] - Black[i-1][j-1] + black[i-1][j-1];
        }
    }

    int ans = k * k;

    for (int i = 0; i <= n - k; i++){
        for (int j = 0; j <= m - k; j++){
            int r1 = i, c1 = j;
            int r2 = i + k, c2 = j + k;

            int cnt1 = White[r2][c2] - White[r1][c2] - White[r2][c1] + White[r1][c1];
            int cnt2 = Black[r2][c2] - Black[r1][c2] - Black[r2][c1] + Black[r1][c1];
            ans = min(ans, min(cnt1, cnt2));
        }
    }

    cout << ans << "\n";
}