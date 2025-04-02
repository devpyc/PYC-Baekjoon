#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin>>t;
    while(t--) {
        string s;
        cin>>s;
        reverse(s.begin(),s.end());
        int ans=0;
        for(int i=0; i<s.size(); i++) {
            if(s[i]=='1') {
                ans+=(1<<i);
            }
        }
        cout<<ans<<"\n";
    }
}