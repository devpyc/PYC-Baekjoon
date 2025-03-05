#include <bits/stdc++.h>
#define ll long long
using namespace std;

struct Edge {
    int u, v;
    ll w;
};

struct DSU {
    vector<int> parent;
    DSU(int n) : parent(n+1) {
        for (int i = 0; i <= n; i++) parent[i] = i;
    }
    int find(int a) {
        return parent[a] == a ? a : parent[a] = find(parent[a]);
    }
    bool unite(int a, int b) {
        a = find(a); b = find(b);
        if (a == b) return false;
        parent[b] = a;
        return true;
    }
};

const int logN = 21;
int n;

vector<int> depth;
vector<ll> dist;
vector<vector<int>> parent;
vector<vector<pair<int, ll>>> tree;

void dfs(int v, int p, int d, ll cost) {
    depth[v] = d;
    dist[v] = cost;
    parent[v][0] = p;
    for (auto &edge : tree[v]) {
        int nv = edge.first;
        ll w = edge.second;
        if (nv == p) continue;
        dfs(nv, v, d + 1, cost + w);
    }
}

int lca(int a, int b) {
    if (depth[a] < depth[b])
        swap(a, b);
    int diff = depth[a] - depth[b];
    for (int i = 0; i < logN; i++) {
        if (diff & (1 << i))
            a = parent[a][i];
    }
    if (a == b) return a;
    for (int i = logN - 1; i >= 0; i--) {
        if (parent[a][i] != parent[b][i]) {
            a = parent[a][i];
            b = parent[b][i];
        }
    }
    return parent[a][0];
}

ll shortest_path(int a, int b) {
    int anc = lca(a, b);
    return dist[a] + dist[b] - 2 * dist[anc];
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    cin >> n;
    vector<Edge> edges(n);
    for (int i = 0; i < n; i++){
        cin >> edges[i].u >> edges[i].v >> edges[i].w;
    }

    DSU dsu(n);
    tree.resize(n + 1);

    int extraU = -1, extraV = -1;
    ll extraW = numeric_limits<ll>::max();
    for (auto &e : edges) {
        if (dsu.unite(e.u, e.v)) {
            tree[e.u].push_back({e.v, e.w});
            tree[e.v].push_back({e.u, e.w});
        } else {
            if (e.w < extraW) {
                extraW = e.w;
                extraU = e.u;
                extraV = e.v;
            }
        }
    }

    depth.resize(n + 1);
    dist.resize(n + 1);
    parent.assign(n + 1, vector<int>(logN, 0));
    dfs(1, 0, 0, 0);
    for (int j = 1; j < logN; j++) {
        for (int i = 1; i <= n; i++) {
            parent[i][j] = parent[parent[i][j - 1]][j - 1];
        }
    }

    int q;
    cin >> q;
    while (q--) {
        int x, y;
        cin >> x >> y;

        ll ans = shortest_path(x, y);

        if (extraU != -1) {
            ll a = shortest_path(x, extraU) + extraW + shortest_path(extraV, y);
            ll b = shortest_path(x, extraV) + extraW + shortest_path(extraU, y);
            ans = min(ans, min(a, b));
        }
        cout << ans << "\n";
    }
}