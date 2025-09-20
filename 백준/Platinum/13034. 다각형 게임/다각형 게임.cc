#include <bits/stdc++.h>
using namespace std;

int main() {
    cin.tie(0)->sync_with_stdio(0);

    int n;
    cin>>n;

    vector<int>arr(n+1);
    if (n>=1) arr[1]=0;
    arr[0]=0;

    for (int i=2; i<=n; i++) {
        unordered_set<int>ust;
        ust.reserve(i*2);

        for (int j=0; j<=i-2; j++) {
            int res=i-j-2;
            ust.insert(arr[j]^arr[res]);
        }

        int ans=0;
        while (ust.count(ans)) {
            ans++;
        }
        arr[i]=ans;
    }
    cout<<(arr[n]?1:2);
}