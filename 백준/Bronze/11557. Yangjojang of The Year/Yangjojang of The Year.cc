#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin>>t;

    while(t--) {
        int n;
        cin>>n;

        string ans, res;
        int mans=0;
        int cans;

        for(int i=0; i<n; i++) {
            cin>>res>>cans;
            if(cans>mans) {
                mans=cans;
                ans=res;
            }
        }
        cout<<ans<<"\n";
    }
}