#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin>>t;

    while(t--) {
        int n,m;
        cin>>n>>m;

        int cnt=0;
        for(int i=n; i<=m; i++) {
            string s=to_string(i);
            for(char c:s) {
                if(c=='0') cnt++;
            }
        }
        cout<<cnt<<"\n";
    }
}