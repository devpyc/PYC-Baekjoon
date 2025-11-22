#include <bits/stdc++.h>
#define INF 987654321
using namespace std;

int main() {
    cin.tie(0)->sync_with_stdio(0);

    int n,m;
    cin>>n>>m;

    vector<vector<int>>dist(n+1,vector<int>(n+1,INF));
    for (int i=0; i<m; i++) {
        int a,b,c;
        cin>>a>>b>>c;
        if (dist[a][b]>c) dist[a][b]=c;
    }

    for (int i=1; i<=n; i++) {
        dist[i][i]=0;
    }

    for (int k=1; k<=n; k++) {
        for (int i=1; i<=n; i++) {
            for (int j=1; j<=n; j++) {
                dist[i][j]=min(dist[i][j],dist[i][k]+dist[k][j]);
            }
        }
    }

    for (int i=1; i<=n; i++) {
        for (int j=1; j<=n; j++) {
            cout<<(dist[i][j]==INF?0:dist[i][j])<<" ";
        }
        cout<<"\n";
    }
}