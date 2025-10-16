#include <bits/stdc++.h>
#define MAX 100001
using namespace std;

int parent[MAX];
long long arr[MAX];

int find(int x) {
    if (parent[x] == x) {
        return x;
    }
    int p = find(parent[x]);
    arr[x] += arr[parent[x]];
    return parent[x] = p;
}

void union_sets(int a, int b, int w) {
    int rootA = find(a);
    int rootB = find(b);
    if (rootA != rootB) {
        parent[rootB] = rootA;
        arr[rootB] = arr[a] - arr[b] + w;
    }
}

int main() {
    cin.tie(0)->sync_with_stdio(0);

    int n, m;

    while (cin >> n >> m) {
        if (n == 0 && m == 0) break;

        for (int i = 1; i <= n; i++) {
            parent[i] = i;
            arr[i] = 0;
        }

        for (int i = 0; i < m; i++) {
            string s;
            int a, b, w;
            cin >> s;

            if (s == "!") {
                cin >> a >> b >> w;
                union_sets(a, b, w);
            } else if (s == "?") {
                cin >> a >> b;
                if (find(a) == find(b)) {
                    cout << arr[b] - arr[a] << "\n";
                } else {
                    cout << "UNKNOWN\n";
                }
            }
        }
    }
}