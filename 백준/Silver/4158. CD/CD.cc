#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    while(true) {
        int n,m;
        cin>>n>>m;

        if(n==0 && m==0) {
            return 0;
        }

        vector<int>a(n);

        for(int i=0; i<n; i++) {
            cin>>a[i];
        }

        sort(a.begin(),a.end());

        int cnt=0;

        for(int i=0; i<m; i++) {
            int x;
            cin>>x;
            if(binary_search(a.begin(),a.end(),x)) {
                cnt++;
            }
        }
        cout<<cnt<<"\n";
    }
}