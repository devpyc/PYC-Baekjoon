#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    string a,b;
    cin>>a>>b;

    int ans=b.length();

    for(int i=0; i<=b.length()-a.length(); i++) {
        int cnt=0;
        for(int j=0; j<a.length(); j++) {
            if(a[j]!=b[i+j]) cnt++;
        }
        ans=min(ans,cnt);
    }
    cout<<ans<<"\n";
}