#include <bits/stdc++.h>
using namespace std;

vector<long long> arr;
vector<long long> tree, lazy;

void init(int node, int start, int end) {
    if (start == end) {
        tree[node] = arr[start];
        return;
    }

    int mid = (start + end) / 2;
    init(node * 2, start, mid);
    init(node * 2 + 1, mid + 1, end);
    tree[node] = tree[node * 2] + tree[node * 2 + 1];
}

void updateLazy(int node, int start, int end, int left, int right, long long diff) {
    if (lazy[node] != 0) {
        tree[node] += (end - start + 1) * lazy[node];
        if (start != end) {
            lazy[node * 2] += lazy[node];
            lazy[node * 2 + 1] += lazy[node];
        }
        lazy[node] = 0;
    }

    if (end < left || start > right) return;

    if (left <= start && end <= right) {
        tree[node] += (end - start + 1) * diff;
        if (start != end) {
            lazy[node * 2] += diff;
            lazy[node * 2 + 1] += diff;
        }
        return;
    }

    int mid = (start + end) / 2;
    updateLazy(node * 2, start, mid, left, right, diff);
    updateLazy(node * 2 + 1, mid + 1, end, left, right, diff);
    tree[node] = tree[node * 2] + tree[node * 2 + 1];
}

long long query(int node, int start, int end, int left, int right) {
    if (lazy[node] != 0) {
        tree[node] += (end - start + 1) * lazy[node];
        if (start != end) {
            lazy[node * 2] += lazy[node];
            lazy[node * 2 + 1] += lazy[node];
        }
        lazy[node] = 0;
    }

    if (end < left || start > right) return 0;

    if (left <= start && end <= right) return tree[node];

    int mid = (start + end) / 2;
    return query(node * 2, start, mid, left, right) + query(node * 2 + 1, mid + 1, end, left, right);
}

int main() {
    cin.tie(0)->sync_with_stdio(0);

    int n,m,k;
    cin>>n>>m>>k;

    arr.resize(n + 1);
    tree.resize(4 * (n + 1));
    lazy.resize(4 * (n + 1));

    for (int i = 1; i <= n; ++i) {
        cin >> arr[i];
    }

    init(1, 1, n);

    for (int i = 0; i < m + k; ++i) {
        int c;
        cin >> c;

        if (c == 1) {
            int l, r;
            long long ss;
            cin >> l >> r >> ss;
            updateLazy(1, 1, n, l, r, ss);
        } else {
            int left, right;
            cin >> left >> right;
            cout << query(1, 1, n, left, right) << '\n';
        }
    }
}