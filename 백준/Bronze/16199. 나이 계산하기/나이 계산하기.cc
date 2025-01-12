#include <iostream>
using namespace std;

bool solve(int m, int d, int p, int q) {
    if (p < m) {
        return true;
    }
    if (p == m && q < d) {
        return true;
    }
    return false;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int a, b, c;
    int x, y, z;

    cin >> a >> b >> c;
    cin >> x >> y >> z;

    int k = x - a;
    if (solve(b, c, y, z)) {
        k--;
    }

    int m = x - a + 1;

    int n = x - a;

    cout << k << "\n";
    cout << m << "\n";
    cout << n << "\n";

    return 0;
}