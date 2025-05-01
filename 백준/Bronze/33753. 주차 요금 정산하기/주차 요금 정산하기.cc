#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int a,b,c,t;
    cin>>a>>b>>c>>t;

    int ans;
    if(t<=30) ans=a;
    else {
        int res=t-30;
        int cur=ceil((double)res/b);
        ans=a+(cur*c);
    }
    cout<<ans;
}