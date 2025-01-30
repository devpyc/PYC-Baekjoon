#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, m;
    cin >> n >> m;

    vector<string> map(m);
    for(int i = 0; i < m; ++i) {
        cin >> map[i];
    }

    vector<vector<bool>> visited(m, vector<bool>(n, false));
    int wp = 0, bp = 0;
    int dx[] = {-1, 1, 0, 0};
    int dy[] = {0, 0, -1, 1};

    for(int i = 0; i < m; ++i) {
        for(int j = 0; j < n; ++j) {
            if(!visited[i][j]) {
                char g = map[i][j];
                
                queue<pair<int, int>> q;
                q.push({i, j});
                visited[i][j] = true;
                int cnt = 0;

                while(!q.empty()) {
                    auto curr = q.front();
                    q.pop();
                    cnt++;

                    for(int d = 0; d < 4; ++d) {
                        int x = curr.first + dx[d];
                        int y = curr.second + dy[d];

                        if(x >= 0 && x < m && y >= 0 && y < n) {
                            if(!visited[x][y] && map[x][y] == g) {
                                visited[x][y] = true;
                                q.push({x, y});
                            }
                        }
                    }
                }

                if(g == 'W') {
                    wp += cnt * cnt;
                } else {
                    bp += cnt * cnt;
                }
            }
        }
    }

    cout << wp << " " << bp << "\n";

    return 0;
}