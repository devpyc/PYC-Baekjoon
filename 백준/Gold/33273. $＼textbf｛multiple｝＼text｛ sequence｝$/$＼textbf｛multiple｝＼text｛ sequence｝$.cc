#include <bits/stdc++.h>
#define ll long long
using namespace std;

const ll MINF = -1000000000000000000LL;

struct Type {
    ll x, c;
    int cap;
};

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, m;
    cin >> n >> m;
    
    vector<Type> arr1(m);
    for (int i = 0; i < m; i++){
        ll x, c;
        cin >> x >> c;
        
        arr1[i].x = x;
        arr1[i].c = c;
        arr1[i].cap = (int)min((ll)n, c);
    }

    sort(arr1.begin(), arr1.end(), [](const Type &a, const Type &b){
        return a.x < b.x;
    });
    
    vector<vector<int>> pred(m);
    for (int j = 0; j < m; j++){
        for (int i = 0; i < j; i++){
            if(arr1[j].x % arr1[i].x == 0)
                pred[j].push_back(i);
        }
    }

    vector<vector<ll>> dp(m, vector<ll>(n+1, MINF));

    for (int i = 0; i < m; i++){
        for (int k = 1; k <= n && k <= arr1[i].cap; k++){
            dp[i][k] = k * arr1[i].x;
        }
    }

    for (int j = 0; j < m; j++){
        if(!pred[j].empty()){
            vector<ll> arr2(n+1, MINF);

            for (int i : pred[j]){
                for (int L = 1; L <= n; L++){
                    if(dp[i][L] != MINF)
                        arr2[L] = max(arr2[L], dp[i][L] - arr1[j].x * L);
                }
            }
            
            for (int Lp = 2; Lp <= n; Lp++){
                int lm = max(1, Lp - arr1[j].cap);
                int lx = Lp - 1;
                if(lm > lx) continue;
                ll res = MINF;
                for (int L = lm; L <= lx; L++){
                    res = max(res, arr2[L]);
                }
                if(res != MINF)
                    dp[j][Lp] = max(dp[j][Lp], res + arr1[j].x * Lp);
            }
        }
    }

    ll ans = MINF;
    
    for (int i = 0; i < m; i++){
        ans = max(ans, dp[i][n]);
    }

    if(ans == MINF) {
        cout << -1 << "\n";
    } else {
        cout << ans << "\n";
    }
}