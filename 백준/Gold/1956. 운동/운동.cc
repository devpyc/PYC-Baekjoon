#include <bits/stdc++.h>
using namespace std;
const int INF = INT_MAX;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int v, e;
    cin >> v >> e;

    vector<vector<int>> dist(v+1, vector<int>(v+1, INF));

    for (int i = 1; i <= v; i++){
        dist[i][i] = 0;
    }

    for (int i = 0; i < e; i++){
        int a, b, c;
        cin >> a >> b >> c;
        dist[a][b] = c;
    }

    for (int k = 1; k <= v; k++){
        for (int i = 1; i <= v; i++){
            if(dist[i][k] == INF) continue;
            for (int j = 1; j <= v; j++){
                if(dist[k][j] == INF) continue;
                if(dist[i][j] > dist[i][k] + dist[k][j]){
                    dist[i][j] = dist[i][k] + dist[k][j];
                }
            }
        }
    }

    int ans = INF;
    for (int i = 1; i <= v; i++){
        for (int j = 1; j <= v; j++){
            if (i == j) continue;
            if (dist[i][j] != INF && dist[j][i] != INF){
                ans = min(ans, dist[i][j] + dist[j][i]);
            }
        }
    }
    cout << (ans == INF ? -1 : ans);
}