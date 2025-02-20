#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while(t--) {
        int v, e;
        cin >> v >> e;

        vector<vector<int>> graph(v + 1);
        for (int i = 0; i < e; i++) {
            int u, v;
            cin >> u >> v;
            graph[u].push_back(v);
            graph[v].push_back(u);
        }

        vector<int> arr(v + 1, 0);
        bool check = true;

        for (int i = 1; i <= v && check; i++) {
            if (arr[i] == 0) {
                queue<int> q;
                q.push(i);
                arr[i] = 1;

                while(!q.empty() && check) {
                    int cur = q.front();
                    q.pop();

                    for (int next : graph[cur]) {
                        if (arr[next] == 0) {
                            arr[next] = -arr[cur];
                            q.push(next);
                        } else if (arr[next] == arr[cur]) {
                            check = false;
                            break;
                        }
                    }
                }
            }
        }

        cout << (check ? "YES" : "NO") << "\n";
    }
}