#include <bits/stdc++.h>
using namespace std;

int main() {
    cin.tie(0)->sync_with_stdio(0);

    int t;
    cin>>t;
    while (t--) {
        int n,k;
        cin>>n>>k;

        if (k!=1) {
            for (int i=1; i<=n; i++) {
                if (i>1) cout<<" ";
                cout<<i;
            }
            cout<<"\n";
            continue;
        }

        if (n<=3) {
            cout<<-1<<"\n";
            continue;
        }

        bool check=true;
        for (int i=2; i<=n; i+=2) {
            if (!check) cout<<" ";
            cout<<i;
            check=false;
        }
        for (int i=1; i<=n; i+=2) {
            cout<<" "<<i;
        }
        cout<<"\n";
    }
}