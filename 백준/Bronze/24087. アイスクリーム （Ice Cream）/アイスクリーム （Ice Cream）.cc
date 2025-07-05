#include <bits/stdc++.h>
using namespace std;

int main() {
    cin.tie(0)->sync_with_stdio(0);

    int s,a,b;
    cin>>s>>a>>b;
    if (s<a) {
        cout<<250;
        return 0;
    }
    s-=a;
    int ans=250;
    ans+=(s/b)*100;
    if (s%b!=0) {
        ans+=100;
    }
    cout<<ans;
}