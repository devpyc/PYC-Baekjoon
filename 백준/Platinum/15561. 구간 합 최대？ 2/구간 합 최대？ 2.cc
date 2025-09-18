#include <bits/stdc++.h>
using namespace std;

struct Node {
    long long mn, mx, best, add;
    Node(long long _mn = (1LL << 60), long long _mx = -(1LL << 60),
         long long _best = -(1LL << 60), long long _add = 0)
        : mn(_mn), mx(_mx), best(_best), add(_add) {}
};

struct SegTree {
    int n;
    vector<Node> st;

    SegTree(int _n = 0) { init(_n); }
    void init(int _n) { n = _n; st.assign(4 * (n + 1), Node()); }

    static Node merge(const Node& L, const Node& R) {
        if (L.mx == -(1LL << 60)) return R;
        if (R.mx == -(1LL << 60)) return L;
        Node res;
        res.mn = min(L.mn, R.mn);
        res.mx = max(L.mx, R.mx);
        res.best = max({L.best, R.best, R.mx - L.mn});
        return res;
    }

    static void apply(Node& x, long long v) {
        x.mn += v;
        x.mx += v;
        x.add += v;
    }

    void push(int p) {
        long long v = st[p].add;
        if (v != 0) {
            apply(st[p << 1], v);
            apply(st[p << 1 | 1], v);
            st[p].add = 0;
        }
    }

    void build(int p, int l, int r, const vector<long long>& f) {
        if (l == r) {
            st[p].mn = st[p].mx = f[l];
            st[p].best = -(1LL << 60);
            st[p].add = 0;
            return;
        }
        int m = (l + r) >> 1;
        build(p << 1, l, m, f);
        build(p << 1 | 1, m + 1, r, f);
        st[p] = merge(st[p << 1], st[p << 1 | 1]);
    }

    void range_add(int p, int l, int r, int ql, int qr, long long v) {
        if (qr < l || r < ql) return;
        if (ql <= l && r <= qr) {
            apply(st[p], v);
            return;
        }
        push(p);
        int m = (l + r) >> 1;
        range_add(p << 1, l, m, ql, qr, v);
        range_add(p << 1 | 1, m + 1, r, ql, qr, v);
        st[p] = merge(st[p << 1], st[p << 1 | 1]);
    }

    Node query(int p, int l, int r, int ql, int qr) {
        if (qr < l || r < ql) return Node();
        if (ql <= l && r <= qr) return st[p];
        push(p);
        int m = (l + r) >> 1;
        Node L = query(p << 1, l, m, ql, qr);
        Node R = query(p << 1 | 1, m + 1, r, ql, qr);
        return merge(L, R);
    }
};

int main() {
    cin.tie(0)->sync_with_stdio(0);

    int N, Q;
    long long U, V;
    cin >> N >> Q >> U >> V;

    vector<long long> K(N + 1, 0);
    for (int i = 1; i <= N; ++i){
        cin >> K[i];
    }

    vector<long long> S(N + 1, 0);
    for (int i = 1; i <= N; ++i){
        S[i] = S[i - 1] + K[i];
    }

    vector<long long> f(N + 1, 0);
    for (int i = 0; i <= N; ++i){
        f[i] = U * S[i] + V * i;
    }

    SegTree st(N);
    st.build(1, 0, N, f);

    while (Q--) {
        int C;
        long long A, B;
        cin >> C >> A >> B;
        if (C == 0) {
            int L = (int)A - 1;
            int R = (int)B;
            Node res = st.query(1, 0, N, L, R);
            cout << res.best - V << '\n';
        } else {
            long long delta = B - K[(int)A];
            if (delta != 0) {
                K[(int)A] = B;
                long long add = U * delta;
                if (A <= N) st.range_add(1, 0, N, (int)A, N, add);
            }
        }
    }
}