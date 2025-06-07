#include <bits/stdc++.h>
using namespace std;

int main() {
    cin.tie(0)->sync_with_stdio(0);

    int t,ans=0;
    cin>>t;

    while (t--) {
        string s;
        cin>>s;

        if (s=="add") {
            int x;
            cin>>x;
            ans|=(1<<x);
        } else if(s=="remove") {
            int x;
            cin>>x;
            ans&=~(1<<x);
        } else if(s=="check") {
            int x;
            cin>>x;
            int res=(ans&(1<<x))?1:0;
            cout<<res<<"\n";
        } else if(s=="toggle") {
            int x;
            cin>>x;
            ans^=(1<<x);
        } else if(s=="all") {
            ans=(1<<21)-1;
        } else if(s=="empty") {
            ans=0;
        }
    }
}