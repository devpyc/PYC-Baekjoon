#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;
    vector<pair<int, int>> a(n);
    vector<int> b(n);

    for(int i = 0; i < n; i++){
        cin >> a[i].first;
        a[i].second = i;
    }

    sort(a.begin(), a.end());

    for(int i = 0; i < n; i++){
        b[a[i].second] = i;
    }

    for(int i = 0; i < n; i++){
        cout << b[i] << " ";
    }
}