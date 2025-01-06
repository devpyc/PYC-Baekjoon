#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, k;
    cin >> n >> k;

    vector<ll> arr(n);
    for(int i = 0; i < n; i++){
        cin >> arr[i];
    }

    sort(arr.begin(), arr.end());

    vector<ll> dist(n);
    dist[0] = arr[0];
    for(int i = 1; i < n; i++){
        dist[i] = arr[i] - arr[i-1];
    }

    sort(dist.begin(), dist.end(), greater<ll>());

    ll ssum = 0;

    int tel = min(k, n);
    for(int i = 0; i < tel; i++){
        ssum += dist[i];
    }

    ll ans = arr[n-1] - ssum;
    ans = max(ans, 0LL);

    cout << ans << "\n";

    return 0;
}