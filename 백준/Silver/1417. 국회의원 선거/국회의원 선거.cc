#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int n;
    cin >> n;

    int a;
    cin >> a;

    priority_queue<int> pq;

    for (int i = 1; i < n; i++) {
        int x;
        cin >> x;
        pq.push(x);
    }

    int cnt = 0;

    if (pq.empty()) {
        cout << 0 << "\n";
        return 0;
    }

    while (!pq.empty() && pq.top() >= a) {
        int res = pq.top();
        pq.pop();

        a++;
        res--;
        cnt++;

        pq.push(res);
    }
    cout << cnt << "\n";
}