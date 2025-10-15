#include <bits/stdc++.h>
#define MAX 80
using namespace std;

int N, M;
bool seat[MAX][MAX];
bool visited[MAX][MAX];
pair<int,int> cheat[MAX][MAX];

int dx[] = {0, 0, -1, -1, 1, 1};
int dy[] = {-1, 1, -1, 1, -1, 1};

bool bip_match(int n, int m) {
    for (int d = 0; d < 6; d++) {
        int nn = n + dx[d], mm = m + dy[d];
        if (0 <= nn && nn < N && 0 <= mm && mm < M && !visited[nn][mm] && seat[nn][mm]) {
            visited[nn][mm] = true;
            if (cheat[nn][mm] == pair<int,int>(-1, -1) || bip_match(cheat[nn][mm].first, cheat[nn][mm].second)) {
                cheat[nn][mm] = pair<int,int>(n, m);
                return true;
            }
        }
    }
    return false;
}

int main() {
    cin.tie(0)->sync_with_stdio(0);

    int t;
    cin >> t;

    while (t--) {
        cin >> N >> M;
        vector<string> arr(N);
        for (int i = 0; i < N; i++) {
            cin >> arr[i];
        }

        int ans = 0;
        memset(seat, false, sizeof(seat));
        memset(cheat, -1, sizeof(cheat));

        for (int n = 0; n < N; n++) {
            for (int m = 0; m < M; m++) {
                if (arr[n][m] == '.') {
                    seat[n][m] = true;
                    ans++;
                }
            }
        }

        for (int n = 0; n < N; n++) {
            for (int m = 0; m < M; m += 2) {
                if (seat[n][m]) {
                    memset(visited, false, sizeof(visited));
                    if (bip_match(n, m)) {
                        ans--;
                    }
                }
            }
        }
        cout << ans << "\n";
    }
}