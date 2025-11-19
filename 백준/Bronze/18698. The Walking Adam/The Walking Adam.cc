#include <bits/stdc++.h>
using namespace std;

int main() {
    cin.tie(0)->sync_with_stdio(0);

    int t;
    cin>>t;
    while (t--) {
        string s;
        cin>>s;
        int cnt=0;
        for (int i=0; i<s.size(); i++) {
            cnt+=(s[i]=='U');
            if (s[i]=='D') break;
        }
        cout<<cnt<<"\n";
    }
}