#include <bits/stdc++.h>
#define ll long long
using namespace std;

struct Node {
    int x, y;
    Node(int x, int y) : x(x), y(y) {
    }
};

ll query(vector<int> &tree, int start, int end, int left, int right, int node) {
    if (left > end || right < start) return 0;
    if (left <= start && end <= right) return tree[node];
    int mid = (start + end) / 2;
    return query(tree, start, mid, left, right, node * 2) + query(tree, mid + 1, end, left, right, node * 2 + 1);
}

int update(vector<int> &tree, int start, int end, int target, int node) {
    if (target < start || target > end) return tree[node];
    if (start == end) return tree[node] += 1;
    int mid = (start + end) / 2;
    return tree[node] = update(tree, start, mid, target, node * 2) + update(tree, mid + 1, end, target, node * 2 + 1);
}

ll solve() {
    int n;
    cin >> n;
    vector<Node> arr;
    for (int i = 0; i < n; i++) {
        int x, y;
        cin >> x >> y;
        arr.emplace_back(x, y);
    }

    sort(arr.begin(), arr.end(), [](const Node &n1, const Node &n2) {
        return n1.y > n2.y;
    });

    int ny = 1;
    int prev = arr[0].y;
    for (auto &n: arr) {
        if (n.y == prev) {
            n.y = ny;
            continue;
        }
        prev = n.y;
        n.y = ++ny;
    }

    sort(arr.begin(), arr.end(), [](const Node &n1, const Node &n2) {
        if (n1.x != n2.x) return n1.x < n2.x;
        return n1.y < n2.y;
    });

    ll ans = 0;
    vector<int> tree(n * 4, 0);
    for (const auto &node: arr) {
        ans += query(tree, 1, ny, 1, node.y, 1);
        update(tree, 1, ny, node.y, 1);
    }
    return ans;
}

int main() {
    cin.tie(0)->sync_with_stdio(0);

    int t;
    cin >> t;
    while (t--) {
        cout << solve() << "\n";
    }
}