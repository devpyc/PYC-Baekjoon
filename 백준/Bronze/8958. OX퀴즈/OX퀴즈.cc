#include<bits/stdc++.h>
using namespace std;

int main(){
    cin.tie(0)->sync_with_stdio(0);

    int t;
    cin>>t;
    while (t--) {
        string s;
        cin>>s;
        int cnt=1;
        int ans=0;
        for (int i=0; i<s.size(); i++) {
            if (s[i]=='O') {
                ans+=cnt;
                cnt++;
            }else {
                cnt=1;
            }
        }
        cout<<ans<<"\n";
    }
}