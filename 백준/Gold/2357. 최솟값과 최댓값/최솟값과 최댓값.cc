#include <bits/stdc++.h>
#define X first
#define Y second
#define INF 1e9
using namespace std;

int n, m;
vector<int> arr;
vector<pair<int, int>> tree;

pair<int, int> init(int node, int start, int end) {
    if (start == end) {
        return tree[node] = {arr[start], arr[start]};
    } else {
        int mid = (start + end) / 2;
        pair<int, int> left = init(node * 2, start, mid);
        pair<int, int> right = init(node * 2 + 1, mid + 1, end);
        return tree[node] = {min(left.X, right.X), max(left.Y, right.Y)};
    }
}

pair<int, int> query(int node, int start, int end, int left, int right) {
    if (left > end || right < start) {
        return {INF, -INF};
    }
    if (left <= start && end <= right) {
        return tree[node];
    }
    int mid = (start + end) / 2;
    pair<int, int> lQuery = query(node * 2, start, mid, left, right);
    pair<int, int> rQuery = query(node * 2 + 1, mid + 1, end, left, right);
    return {min(lQuery.X, rQuery.X), max(lQuery.Y, rQuery.Y)};
}

int main() {
    cin.tie(0)->sync_with_stdio(0);

    cin >> n >> m;
    arr.resize(n);
    tree.resize(4 * n);
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    init(1, 0, n - 1);

    for (int i = 0; i < m; i++) {
        int a, b;
        cin >> a >> b;
        pair<int, int> ans = query(1, 0, n - 1, a - 1, b - 1);
        cout << ans.X << ' ' << ans.Y << '\n';
    }

    return 0;
}