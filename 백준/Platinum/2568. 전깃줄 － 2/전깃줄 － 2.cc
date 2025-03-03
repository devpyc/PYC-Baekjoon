#include <bits/stdc++.h>
using namespace std;

struct Cable {
    int a, b;
};

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;
    vector<Cable> ans(n);
    for (int i = 0; i < n; i++){
        cin >> ans[i].a >> ans[i].b;
    }

    sort(ans.begin(), ans.end(), [](const Cable &c1, const Cable &c2) {
        return c1.a < c2.a;
    });

    vector<int> arr1(n, -1);
    vector<int> arr2;

    for (int i = 0; i < n; i++){
        int val = ans[i].b;
        int cur = lower_bound(arr2.begin(), arr2.end(), val,
            [&](int idx, int value) { return ans[idx].b < value; }
        ) - arr2.begin();

        if(cur > 0)
            arr1[i] = arr2[cur - 1];

        if(cur == arr2.size()){
            arr2.push_back(i);
        } else {
            arr2[cur] = i;
        }
    }

    int len = arr2.size();

    vector<bool> check(n, false);
    int cur = arr2[len - 1];
    while(cur != -1) {
        check[cur] = true;
        cur = arr1[cur];
    }

    int res = n - len;
    cout << res << "\n";

    for (int i = 0; i < n; i++){
        if(!check[i])
            cout << ans[i].a << "\n";
    }
}