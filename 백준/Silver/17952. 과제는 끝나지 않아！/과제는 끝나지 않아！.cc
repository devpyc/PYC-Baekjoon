#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int n;
    cin >> n;

    stack<int> arr1;
    stack<int> arr2;
    int ans = 0;

    for (int i = 0; i < n; i++) {
        int tt;
        cin >> tt;

        if (tt == 1) {
            int a, t;
            cin >> a >> t;
            
            arr1.push(a);
            arr2.push(t);
        }

        if (!arr2.empty()) {
            arr2.top()--;
            if (arr2.top() == 0) {
                ans += arr1.top();
                arr1.pop();
                arr2.pop();
            }
        }
    }
    cout << ans <<"\n";
}