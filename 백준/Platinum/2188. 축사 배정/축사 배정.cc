#include <bits/stdc++.h>
#define MAX 201
using namespace std;

int n, m;
vector<int> adj[MAX];
int check[MAX];
bool visited[MAX];

bool dfs(int cow) {
    for (int barn: adj[cow]) {
        if (visited[barn]) continue;
        visited[barn] = true;
        if (check[barn] == -1 || dfs(check[barn])) {
            check[barn] = cow;
            return true;
        }
    }
    return false;
}

int main() {
    cin.tie(0)->sync_with_stdio(0);

    cin >> n >> m;

    for (int i = 1; i <= n; ++i) {
        int S;
        cin >> S;
        for (int j = 0; j < S; ++j) {
            int barn;
            cin >> barn;
            adj[i].push_back(barn);
        }
    }

    memset(check, -1, sizeof(check));

    int cnt = 0;
    for (int i = 1; i <= n; ++i) {
        memset(visited, false, sizeof(visited));
        if (dfs(i)) {
            ++cnt;
        }
    }
    cout << cnt;
}