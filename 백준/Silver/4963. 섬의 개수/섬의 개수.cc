#include <bits/stdc++.h>
using namespace std;

int w, h;
int board[50][50];
bool visited[50][50];
int dx[] = {0, 0, 1, -1, 1, 1, -1, -1};
int dy[] = {1, -1, 0, 0, 1, -1, 1, -1};

void dfs(int x, int y) {
    visited[x][y] = true;

    for(int i = 0; i < 8; i++) {
        int nx = x + dx[i];
        int ny = y + dy[i];

        if(nx >= 0 && nx < h && ny >= 0 && ny < w) {
            if(board[nx][ny] == 1 && !visited[nx][ny]) {
                dfs(nx, ny);
            }
        }
    }
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    while(true) {
        cin >> w >> h;

        if(w == 0 && h == 0) break;

        for(int i = 0; i < h; i++) {
            for(int j = 0; j < w; j++) {
                cin >> board[i][j];
            }
        }

        memset(visited, false, sizeof(visited));

        int cnt = 0;
        for(int i = 0; i < h; i++) {
            for(int j = 0; j < w; j++) {
                if(board[i][j] == 1 && !visited[i][j]) {
                    dfs(i, j);
                    cnt++;
                }
            }
        }
        cout << cnt << "\n";
    }
}