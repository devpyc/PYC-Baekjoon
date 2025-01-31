#include <iostream>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;

    while(t--) {
        int m, n, x, y;
        cin >> m >> n >> x >> y;

        x--;
        y--;

        bool ans = false;
        
        for(int k = x; k < (m * n); k += m) {
            if(k % n == y) {
                cout << k + 1 << '\n';
                ans = true;
                
                break;
            }
        }

        if(!ans) {
            cout << -1 << '\n';
        }
    }
}