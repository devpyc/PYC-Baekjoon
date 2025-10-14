#include <bits/stdc++.h>
#define MAX 30000
using namespace std;

struct mars {
    int x, y1, y2, type;
    bool operator<(const mars &e) const {
        return x < e.x;
    }
};

struct SegmentTree {
    vector<int> tree, count;
    SegmentTree(int n) : tree(4*n), count(4*n) {}

    void update(int node, int start, int end, int l, int r, int val) {
        if (r <= start || end <= l) return;
        if (l <= start && end <= r) {
            count[node] += val;
        } else {
            int mid = (start + end) / 2;
            update(2*node, start, mid, l, r, val);
            update(2*node+1, mid, end, l, r, val);
        }
        if (count[node] > 0) {
            tree[node] = end - start;
        } else {
            if (end - start == 1) {
                tree[node] = 0;
            } else {
                tree[node] = tree[2*node] + tree[2*node+1];
            }
        }
    }

    int query() {
        return tree[1];
    }
};

int main() {
    cin.tie(0)->sync_with_stdio(0);

    int n;
    cin >> n;
    vector<mars> arr;
    for (int i = 0; i < n; ++i) {
        int x1, y1, x2, y2;
        cin >> x1 >> y1 >> x2 >> y2;
        arr.push_back({x1, y1, y2, 1});
        arr.push_back({x2, y1, y2, -1});
    }

    sort(arr.begin(), arr.end());

    SegmentTree segTree(MAX);
    int res = arr[0].x;
    long long area = 0;

    for (const auto &e : arr) {
        int x = e.x, y1 = e.y1, y2 = e.y2, type = e.type;
        area += (long long)(x - res) * segTree.query();
        segTree.update(1, 0, MAX, y1, y2, type);
        res = x;
    }
    cout << area;
}