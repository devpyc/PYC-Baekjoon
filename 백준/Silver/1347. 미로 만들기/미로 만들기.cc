#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    string m;

    cin >> n;
    cin >> m;

    int dir = 2;
    int x = 0, y = 0;

    set<pair<int, int>> visited;
    visited.insert({x, y});

    int minX = 0, maxX = 0, minY = 0, maxY = 0;

    int dx[] = {-1, 0, 1, 0};
    int dy[] = {0, 1, 0, -1};

    for (char move : m) {
        if (move == 'F') {
            x += dx[dir];
            y += dy[dir];
            visited.insert({x, y});

            minX = min(minX, x);
            maxX = max(maxX, x);
            minY = min(minY, y);
            maxY = max(maxY, y);
        } else if (move == 'L') {
            dir = (dir + 3) % 4;
        } else if (move == 'R') {
            dir = (dir + 1) % 4;
        }
    }

    int h = maxX - minX + 1;
    int w = maxY - minY + 1;
    vector<vector<char>> arr(h, vector<char>(w, '#'));

    for (const auto& pos : visited) {
        int r = pos.first - minX;
        int c = pos.second - minY;
        arr[r][c] = '.';
    }

    for (int i = 0; i < h; i++) {
        for (int j = 0; j < w; j++) {
            cout << arr[i][j];
        }
        cout << "\n";
    }
}