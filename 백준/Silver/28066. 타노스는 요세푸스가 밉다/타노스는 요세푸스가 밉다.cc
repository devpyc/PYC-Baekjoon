#include <bits/stdc++.h>
#define MAX 1000000
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, k;
    cin >> n >> k;

    vector<int> arr1(n+1), arr2(n+1);

    for(int i = 1; i <= n; i++){
        arr1[i] = (i == 1 ? n : i - 1);
        arr2[i] = (i == n ? 1 : i + 1);
    }
    int ans = 1;
    int cur = n;

    while(cur > 1){
        int cnt = min(k - 1, cur - 1);
        int tmp = arr2[ans];

        for(int i = 0; i < cnt; i++){
            int p = arr1[tmp];
            int n = arr2[tmp];

            arr2[p] = n;
            arr1[n] = p;

            tmp = n;

            cur--;
            if(cur == 1) break;
        }
        if(cur == 1) break;

        ans = arr2[ans];
    }
    cout << ans << "\n";

    return 0;
}