#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;

    while (t--) {
        string s;
        int a,b;

        cin>>s>>a>>b;

        string ans="";

        for(int i=0; i<s.size(); i++) {
            if(i>=a && i<b) {
                continue;
            }else {
                ans+=s[i];
            }
        }
        cout<<ans<<endl;
    }

    return 0;
}