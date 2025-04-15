#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin>>n;

    vector<int>cnt(10001,0);

    for(int i=0; i<n; i++) {
        int x;
        cin>>x;
        cnt[x]++;
    }

    for(int i=1; i<10001; i++) {
        for(int j=0; j<cnt[i]; j++) {
            cout<<i<<"\n";
        }
    }
}